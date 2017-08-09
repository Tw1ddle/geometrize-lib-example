[![Geometrize library example logo](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/geometrize_lib_example_logo.png?raw=true "Geometrize - library for geometrizing images into geometric primitives demo logo")](http://www.geometrize.co.uk)

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/LICENSE)
[![Travis Geometrize Example Build Status](https://img.shields.io/travis/Tw1ddle/geometrize-lib-example.svg?style=flat-square)](https://travis-ci.org/Tw1ddle/geometrize-lib-example)
[![AppVeyor Geometrize Example Build Status](https://ci.appveyor.com/api/projects/status/tav5nu3isxvdjkbh?svg=true)](https://ci.appveyor.com/project/Tw1ddle/geometrize-lib-example)

Minimal example demonstrating the [Geometrize library](https://github.com/Tw1ddle/geometrize-lib) used in the image-to-shapes conversion app [Geometrize](http://www.geometrize.co.uk).

## Usage

Copy the binary to the [sample images](https://github.com/Tw1ddle/geometrize-lib-example/tree/master/sample_images/) folder and start geometrizing some images via the command-line.

```
# Create an image made of 500 rotated rectangles
geometrize-lib-example -i monarch_butterfly.png -o monarch_butterfly_out.png -t rotated_rectangle -s 500
```

[![Geometrize Monarch Butterfly Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Monarch Butterfly Example")](http://www.geometrize.co.uk)


```
# Create an image made of 400 circles
geometrize-lib-example -i sliced_fruit.png -o sliced_fruit_out.png -t circle -s 400
```

[![Geometrize Fruit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sliced_fruit.png?raw=true "Geometrize Fruit Example")](http://www.geometrize.co.uk)

```
# Create an image made of 350 rotated ellipses
geometrize-lib-example -i splitting_pomegranate.png -o splitting_pomegranate_out.png -t rotated_ellipse -s 350
```

[![Geometrize Pomegranate Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/splitting_pomegranate.png?raw=true "Geometrize Splitting Pomegranate Example")](http://www.geometrize.co.uk)

```
# Create an image made of 5000 polylines
geometrize-lib-example -i sundaes.png -o sundaes_out.png -t polyline -s 5000
```

[![Geometrize Sundaes Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sundaes.png?raw=true "Geometrize Sundaes Example")](http://www.geometrize.co.uk)

```
# Create an image made of 300 triangles
geometrize-lib-example -i grapefruit.png -o grapefruit_out.png -t triangle -s 300
```

[![Geometrize Grapefruit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/grapefruit.png?raw=true "Geometrize Grapefruit Example")](http://www.geometrize.co.uk)

## Options

Flag            | Description    | Default    |
--------------- | ---------------| ---------|
i               | The filepath to load the input image from | n/a
o               | The filepath to save the output image | n/a
t               | The type of shape to use | One of: rectangle, rotated_rectangle, triangle, ellipse, rotated_ellipse, circle, line, quadratic_bezier, polyline
s               | Number of shapes to use in the output image | 250
c               | The number of seed shapes tried per shape added to the output image | 500
m               | The maximum number of times to mutate each candidate shape | 100
a               | The opacity of each shape added to the output image | 128

## Notes
 * Got an idea or suggestion? Open an issue or send Sam a message on [Twitter](https://twitter.com/Sam_Twidale).