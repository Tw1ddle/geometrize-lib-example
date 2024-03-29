[![Geometrize library example logo](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/geometrize_lib_example_logo.png?raw=true "Geometrize - library for geometrizing images into geometric primitives demo logo")](https://www.geometrize.co.uk)

[![License](https://img.shields.io/:license-mit-blue.svg?style=flat-square)](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/LICENSE)
[![Build Status Badge](https://ci.appveyor.com/api/projects/status/github/Tw1ddle/geometrize-lib-example)](https://ci.appveyor.com/project/Tw1ddle/geometrize-lib-example)

Minimal example of the [Geometrize library](https://github.com/Tw1ddle/geometrize-lib), the library used in the image-to-shapes conversion app [Geometrize](https://www.geometrize.co.uk).

## Usage

Copy the binary to the [sample images](https://github.com/Tw1ddle/geometrize-lib-example/tree/master/sample_images/) folder and start geometrizing some images via the command-line.

```
# Create an image made of 500 rotated rectangles
geometrize_lib_example -i monarch_butterfly.png -o monarch_butterfly_out.png -t rotated_rectangle -s 500
```

[![Geometrize Monarch Butterfly Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Monarch Butterfly Example")](https://www.geometrize.co.uk)


```
# Create an image made of 400 circles
geometrize_lib_example -i sliced_fruit.png -o sliced_fruit_out.png -t circle -s 400
```

[![Geometrize Fruit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sliced_fruit.png?raw=true "Geometrize Fruit Example")](https://www.geometrize.co.uk)

```
# Create an image made of 400 rotated ellipses
geometrize_lib_example -i pomegranate_splitting.png -o pomegranate_splitting_out.png -t rotated_ellipse -s 400
```

[![Geometrize Pomegranate Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/pomegranate_splitting.png?raw=true "Geometrize Pomegranate Example")](https://www.geometrize.co.uk)

```
# Create an image made of 300 triangles
geometrize_lib_example -i grapefruit.png -o grapefruit_out.png -t triangle -s 300
```

[![Geometrize Grapefruit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/grapefruit.png?raw=true "Geometrize Grapefruit Example")](https://www.geometrize.co.uk)

```
# Create an image made of 300 ellipses
geometrize_lib_example -i hot_air_balloon.png -o hot_air_balloon_out.png -t ellipse -s 300
```

[![Geometrize Hot Air Balloon Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/hot_air_balloon.png?raw=true "Geometrize Hot Air Balloon Example")](https://www.geometrize.co.uk)


```
# Create an image made of 500 rectangles
geometrize_lib_example -i sunrise_at_sea.png -o sunrise_at_sea_out.png -t rectangle -s 500
```

[![Geometrize Sunrise At Sea Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sunrise_at_sea.png?raw=true "Geometrize Sunrise At Sea Example")](https://www.geometrize.co.uk)


```
# Create an image made of 5000 polylines
geometrize_lib_example -i sundaes.png -o sundaes_out.png -t polyline -s 5000
```

[![Geometrize Sundaes Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/sundaes.png?raw=true "Geometrize Sundaes Example")](https://www.geometrize.co.uk)

```
# Create an image made of 4000 quadratic beziers
geometrize_lib_example -i jammy_biscuit.png -o jammy_biscuit_out.png -t quadratic_bezier -s 4000
```

[![Geometrize Jammy Biscuit Example](https://github.com/Tw1ddle/geometrize-lib-example/blob/master/screenshots/jammy_biscuit.png?raw=true "Geometrize Jammy Biscuit Example")](https://www.geometrize.co.uk)

```
# Create a JSON data file defining 400 circles that make up an image
geometrize_lib_example -i sliced_fruit.png -o sliced_fruit_out.json -t circle -s 400
```

```
# Create a SVG image file consisting of 400 circles 
geometrize_lib_example -i sliced_fruit.png -o sliced_fruit_out.svg -t circle -s 400
```

```
# Create an SVG image file consisting of 200 circles, ellipses and rotated rectangles
geometrize_lib_example -i sliced_fruit.png -o sliced_fruit_out.svg -t "circle ellipse rotated_rectangle" -s 200
```

## Options

Flag            | Description    | Default    |
--------------- | ---------------| ---------|
i               | The filepath to load the input image from | n/a
o               | The filepath to save the output image, JSON data or SVG | n/a
t               | The types of shapes to use | One or more of: rectangle, rotated_rectangle, triangle, ellipse, rotated_ellipse, circle, line, quadratic_bezier, polyline
s               | Number of shapes to use in the output image | 250
c               | The number of candidate shapes per shape added to the output image | 500
m               | The maximum number of times to mutate each candidate shape | 100
a               | The opacity (0-255) of each shape added to the output image | 128

## Notes
 * Got an idea or suggestion? Open an issue or send Sam a message on [Twitter](https://twitter.com/Sam_Twidale).
