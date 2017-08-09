[![Geometrize library example logo](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/geometrize_lib_example_logo.png?raw=true "Geometrize - library for geometrizing images into geometric primitives demo logo")](http://www.geometrize.co.uk)

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/LICENSE)
[![Travis Geometrize Example Build Status](https://img.shields.io/travis/Tw1ddle/geometrize-lib-example.svg?style=flat-square)](https://travis-ci.org/Tw1ddle/geometrize-lib-example)
[![AppVeyor Geometrize Example Build Status](https://ci.appveyor.com/api/projects/status/tav5nu3isxvdjkbh?svg=true)](https://ci.appveyor.com/project/Tw1ddle/geometrize-lib-example)

Minimal example demonstrating the [Geometrize library](https://github.com/Tw1ddle/geometrize-lib) at the core of the image-to-shapes app [Geometrize](http://www.geometrize.co.uk).

## Usage

Build and copy the example binary to the [sample images](https://github.com/Tw1ddle/geometrize-lib-example/tree/master/sample_images/). Run in the console, for example:

```
geometrize-lib-example -i monarch_butterfly.png -o monarch_butterfly_out.png -t rotated_rectangle -s 500
```

[![Geometrize Example 1](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Example Screenshot 1")](http://www.geometrize.co.uk)

```
geometrize-lib-example -i sliced_fruit.png -o sliced_fruit_out.png -t circle -s 400
```

[![Geometrize Example 2](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sliced_fruit.png?raw=true "Geometrize Example Screenshot 2")](http://www.geometrize.co.uk)

## Options

Option          | Description    | Value    |
--------------- | ---------------| ---------|
input           | The path to load the input image from | Required
output          | The path to save the output image | Required
shape_type      | The type of shape to use | Required. One of: rectangle, rotated_rectangle, triangle, ellipse, rotated_ellipse, circle, line, quadratic_bezier, polyline
shape_count     | Number of shapes to use in the output image | Optional, default = 250
candidate_shape_count | The number of seed shapes to select from for each shape added to the output image | Optional, default = 500
mutations_count | The number of times to mutate each candidate shape | Optional, default = 100
shape_alpha     | The opacity of the shapes added to the output image | Optional, default = 128

## Notes
 * Got an idea or suggestion? Open an issue or send Sam a message on [Twitter](https://twitter.com/Sam_Twidale).