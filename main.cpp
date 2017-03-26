#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "lib/args/args.hxx"
#define STB_IMAGE_IMPLEMENTATION
#include "lib/stb/stb_image.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "lib/stb/stb_image_write.h"

#include "geometrize/bitmap/bitmap.h"
#include "geometrize/bitmap/rgba.h"
#include "geometrize/runner/imagerunner.h"
#include "geometrize/runner/imagerunneroptions.h"
#include "geometrize/shape/shape.h"
#include "geometrize/shape/shapetypes.h"

geometrize::Bitmap readImage(const std::string& filePath) // Helper function to read an image file to RGBA8888 pixel data
{
    const char* path{filePath.c_str()};
    int w = 0;
    int h = 0;
    int n = 0;
    std::uint8_t* dataPtr{stbi_load(path, &w, &h, &n, 4)};
    if(dataPtr == nullptr) {
        return geometrize::Bitmap(0, 0, geometrize::rgba{0, 0, 0, 0});
    }
    const std::vector<std::uint8_t> data{dataPtr, dataPtr + (w * h * 4)};
    delete dataPtr;

    const geometrize::Bitmap bitmap(w, h, data);
    return bitmap;
}

bool writeImage(const geometrize::Bitmap& bitmap, const std::string& filePath) // Helper function to write a PNG file
{
    const char* path{filePath.c_str()};
    const void* data{bitmap.getDataRef().data()};
    return stbi_write_png(path, bitmap.getWidth(), bitmap.getHeight(), 4, data, bitmap.getWidth() * 4) != 0;
}

geometrize::shapes::ShapeTypes shapeTypeForName(const std::string& shapeName) // Helper function to convert a string to a Geometrize shape type
{
    for(const std::pair<geometrize::shapes::ShapeTypes, std::string>& p : geometrize::shapes::shapeTypeNames) {
        if(p.second == shapeName) {
            return p.first;
        }
    }
    std::cout << "Bad shape type name, defaulting to ellipses \n";
    return geometrize::shapes::ELLIPSE;
}

std::string shapeNameForType(const geometrize::shapes::ShapeTypes type) // Helper function to convert a shape type to a human-readable string
{
    for(const std::pair<geometrize::shapes::ShapeTypes, std::string>& p : geometrize::shapes::shapeTypeNames) {
        if(p.first == type) {
            return p.second;
        }
    }
    return "unknown";
}

int main(int argc, char* argv[])
{
    args::ArgumentParser parser("Geometrize Demo - a minimal demonstration of the Geometrize library, a tool for turning images into shapes. "
                                "Pass it a PNG image from the samples included in this distribution, or find your own online. "
                                "Small images recommended for speed. Visit https://github.com/Tw1ddle/geometrize-demo for more info.");

    args::HelpFlag help(parser, "help", "Show this help menu.", {'h', "help"});

    args::Group required(parser, "Required:", args::Group::Validators::All);
    args::ValueFlag<std::string> inputFileFlag(required, "input", "The input image path.", {'i', "input path"});
    args::ValueFlag<std::string> outputFileFlag(required, "output", "The output image path.", {'o', "output path"});
    args::ValueFlag<std::string> shapeNameFlag(required, "shape_type", "The type of shape to generate.", {'t', "type of shape to generate"}, "ellipse");

    args::Group optional(parser, "Optional:", args::Group::Validators::DontCare);
    args::ValueFlag<std::uint32_t> shapeCountFlag(optional, "shape_count", "The number of shapes to generate for the final output.", {'s', "number of shapes"}, 250U);
    args::ValueFlag<std::uint32_t> candidateShapeCountFlag(optional, "candidate_shape_count", "The number of shapes to generate for each shape that is actually added to the output.", {'c', "number of candidate shapes to generate"}, 500U);
    args::ValueFlag<std::uint32_t> mutationsPerShapeFlag(optional, "mutation_count", "The number of times to mutate every generated shape.", {'m', "number of mutations"}, 100U);
    args::ValueFlag<std::uint8_t> shapeAlphaFlag(optional, "shape_alpha", "The alpha/opacity of the generated shapes", {'a', "shape alpha (0-255)"}, 128U);

    try {
        parser.ParseCLI(argc, argv);
    } catch (args::Help) {
        std::cout << parser;
        return 0;
    } catch (args::Error e) {
        std::cout << e.what() << "\n";
        std::cout << parser;
        return 1;
    }

    const std::string inputImagePath{inputFileFlag.Get()};
    const geometrize::Bitmap bitmap{readImage(inputImagePath)};
    if(bitmap.getWidth() == 0 || bitmap.getHeight() == 0) {
        std::cout << "Failed to read input image from: " << inputImagePath;
        return 1;
    }

    geometrize::ImageRunnerOptions options;
    options.alpha = shapeAlphaFlag.Get();
    options.maxShapeMutations = mutationsPerShapeFlag.Get();
    options.shapeCount = candidateShapeCountFlag.Get();
    options.shapeTypes = shapeTypeForName(shapeNameFlag.Get());

    geometrize::ImageRunner runner(bitmap);
    for(std::size_t steps = 0; steps < shapeCountFlag.Get(); steps++) {
        const std::vector<geometrize::ShapeResult> shapes{runner.step(options)};
        for(std::size_t i = 0; i < shapes.size(); i++) {
            std::cout << "Added shape " << steps + i << ". Type: " << shapeNameForType(shapes[i].shape->getType()) << "\n";
        }
    }

    const std::string outFilePath{outputFileFlag.Get()};
    if(!writeImage(runner.getCurrent(), outFilePath)) {
        std::cout << "Failed to write image to: " << outFilePath;
        return 1;
    }

    std::cout << "Wrote image to: " << outFilePath;
    return 0;
}
