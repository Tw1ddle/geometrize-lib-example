# Geometrize Demo

<a href="https://github.com/Tw1ddle/geometrize-demo"><img width="425px" src="/screenshots/geometrize_demo_logo.png" alt="Geometrize Demo Logo" align="left" hspace="10" vspace="6"></a>

Sample application demonstrating [Geometrize](https://github.com/Tw1ddle/geometrize-lib), a C++ library for turning images into shapes. The demo is a minimalistic cross-platform CLI application that produces a geometrized version of an input image.

Or go here for the bigger Qt GUI version of [Geometrize](https://github.com/Tw1ddle/geometrize).

## Usage

Check the [releases](https://github.com/Tw1ddle/geometrize-demo/releases) section for binaries, or build it yourself (requires qmake and C++11).

Try these options on some example images to get started:

[!Geometrize Example 1(https://github.com/Tw1ddle/geometrize/blob/master/screenshots/monarch_butterfly.png?raw=true "Geometrize Example Screenshot 1")](https://github.com/Tw1ddle/geometrize)

[!Geometrize Example 2(https://github.com/Tw1ddle/geometrize/blob/master/screenshots/jammy_biscuit.png?raw=true "Geometrize Example Screenshot 2")](https://github.com/Tw1ddle/geometrize)

## Options

Option | Description
--- | ---
target -path | The path to load the target image from
output -path | The path to save the final image
shapes -n | Number of shapes to create
shapetypes | circles
alpha | Mixture of the source and target image
circles | Use circles
ellipses | Use ellipses
lines | Use lines
polylines | Use polylines
rectangles | Use rectangles
rotatedellipses | Use rotated ellipses
rotatedrectangles | Use rotated rectangles
splines | Use splines
triangles | Use triangles

## License

This demo application is released under the MIT license.