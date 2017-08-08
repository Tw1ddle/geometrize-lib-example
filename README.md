# Geometrize Library Example

<a href="https://github.com/Tw1ddle/geometrize-demo"><img width="425px" src="/screenshots/geometrize_demo_logo.png" alt="Geometrize Demo Logo" align="left" hspace="10" vspace="6"></a>

Sample application demonstrating [Geometrize](https://github.com/Tw1ddle/geometrize-lib), a C++ library for turning images into shapes. The demo is a minimalistic cross-platform CLI application that produces a geometrized version of an input image.

Or go here for the bigger Qt GUI version of [Geometrize](https://github.com/Tw1ddle/geometrize).

## Usage

Check the [releases](https://github.com/Tw1ddle/geometrize-demo/releases) section for binaries, or build it yourself (requires qmake and C++11).

Try these options on some example images to get started:

[!Geometrize Example 1(https://github.com/Tw1ddle/geometrize/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Example Screenshot 1")](https://github.com/Tw1ddle/geometrize)

[!Geometrize Example 2(https://github.com/Tw1ddle/geometrize/blob/master/screenshots/jammy_biscuit.png?raw=true "Geometrize Example Screenshot 2")](https://github.com/Tw1ddle/geometrize)

## Options

Option          | Description    | Value    |
--------------- | ---------------| ---------|
input -path | The path to load the target image from | Required
output -path | The path to save the final image | Required
shape_type | The type of shape to use | Default ellipse
shape_count | Number of shapes to create | Defualt 250
candidate_shape_count | The number of shapes to generate for each shape | Default 500
mutations_count | The number of times to mutate each generated shape | Default 100
shape_alpha | Mixture of the source and target image | 0-255

## License

This demo application is released under the MIT license.