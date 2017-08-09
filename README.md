[![Geometrize library example logo](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/geometrize_lib_example_logo.png?raw=true "Geometrize - library for geometrizing images into geometric primitives demo logo")](http://www.geometrize.co.uk)

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/LICENSE)
[![Travis Geometrize Example Build Status](https://img.shields.io/travis/Tw1ddle/geometrize-lib-example.svg?style=flat-square)](https://travis-ci.org/Tw1ddle/geometrize-lib-example)
[![AppVeyor Geometrize Example Build Status](https://ci.appveyor.com/api/projects/status/tav5nu3isxvdjkbh?svg=true)](https://ci.appveyor.com/project/Tw1ddle/geometrize-lib-example)

A minimal example demonstrating the [library](https://github.com/Tw1ddle/geometrize-lib) used in the images to shapes app [Geometrize](http://www.geometrize.co.uk).

## Usage

Build and run from the command line. Try using the [sample images](https://github.com/Tw1ddle/geometrize-lib-example/sample_images/) to get started:


[[!Geometrize Example 1](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Example Screenshot 1")](http://www.geometrize.co.uk)

[[!Geometrize Example 2](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/jammy_biscuit.png?raw=true "Geometrize Example Screenshot 2")](http://www.geometrize.co.uk)

## Options

Option          | Description    | Value    |
--------------- | ---------------| ---------|
input -path | The path to load the target image from | Required
output -path | The path to save the final image | Required
shape_type | The type of shape to use | Default = ellipse (one of: rectangle, rotated_rectangle, triangle, ellipse, rotated_ellipse, circle, line, quadratic_bezier, polyline) 
shape_count | Number of shapes to add in the final image | Default = 250
candidate_shape_count | The number of seed shapes to select from for each shape added to the final image | Default = 500
mutations_count | The number of times to mutate each candidate shape | Default = 100
shape_alpha | The opacity of the shapes added in the final image | Default = 128

## Notes
 * Got an idea or suggestion? Open an issue or send Sam a message on [Twitter](https://twitter.com/Sam_Twidale).