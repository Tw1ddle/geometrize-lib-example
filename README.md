[![Geometrize library example logo](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/geometrize_lib_example_logo.png?raw=true "Geometrize - library for geometrizing images into geometric primitives demo logo")](http://www.geometrize.co.uk)

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/LICENSE)
[![Travis Geometrize Example Build Status](https://img.shields.io/travis/Tw1ddle/geometrize-lib-example.svg?style=flat-square)](https://travis-ci.org/Tw1ddle/geometrize-lib-example)
[![AppVeyor Geometrize Example Build Status](https://ci.appveyor.com/api/projects/status/tav5nu3isxvdjkbh?svg=true)](https://ci.appveyor.com/project/Tw1ddle/geometrize-lib-example)

Minimal example demonstrating the [Geometrize library](https://github.com/Tw1ddle/geometrize-lib) used in the image-to-shapes conversion app [Geometrize](http://www.geometrize.co.uk).

Start by copying the binary to the [sample images](https://github.com/Tw1ddle/geometrize-lib-example/tree/master/sample_images/) folder and geometrizing an example via the console. For example:

```
# Creates an image made of 500 rotated rectangles
geometrize-lib-example -i monarch_butterfly.png -o monarch_butterfly_out.png -t rotated_rectangle -s 500
```

[![Geometrize Monarch Butterfly Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Monarch Butterfly Example")](http://www.geometrize.co.uk)



```
# Creates an image made of 400 circles
geometrize-lib-example -i sliced_fruit.png -o sliced_fruit_out.png -t circle -s 400
```

[![Geometrize Fruit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sliced_fruit.png?raw=true "Geometrize Fruit Example")](http://www.geometrize.co.uk)

Option          | Description    | Value    |
--------------- | ---------------| ---------|
input           | The path to load the input image from | Required
output          | The path to save the output image | Required
shape_type      | The type of shape to use | Required. One of: rectangle, rotated_rectangle, triangle, ellipse, rotated_ellipse, circle, line, quadratic_bezier, polyline
shape_count     | Number of shapes to use in the output image | Optional, default = 250
candidate_shape_count | The number of seed shapes tried per shape added to the output image | Optional, default = 500
mutations_count | The maximum number of times to mutate each candidate shape | Optional, default = 100
shape_alpha     | The opacity of each shape added to the output image | Optional, default = 128

## Notes
 * Got an idea or suggestion? Open an issue or send Sam a message on [Twitter](https://twitter.com/Sam_Twidale).