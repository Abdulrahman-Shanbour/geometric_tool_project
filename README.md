# Geometric Tool Project

A simple C++ console application for drawing geometric shapes using ASCII art.

## Description

This project provides an interactive tool to draw various geometric shapes including squares, rectangles, triangles, circles, and hexagons. Users can specify dimensions and choose characters to create ASCII art representations of these shapes.

## Features

- Interactive menu-driven interface
- Support for multiple geometric shapes:
  - Square
  - Rectangle
  - Triangle
  - Circle
  - Hexagon
- Customizable drawing characters
- Input validation
- Option to redraw shapes with new dimensions
- Console clearing functionality
- Memory of previous shape dimensions for easy redrawing

## Requirements

- C++ compiler (e.g., g++, Visual Studio)
- Windows operating system (uses `cls` command for console clearing)

## How to Build

Compile the C++ source file using your preferred C++ compiler:

```bash
g++ project.cpp -o geometric_tool
```

Or using Visual Studio:

```bash
cl project.cpp
```

## Usage

Run the compiled executable:

```bash
./geometric_tool
```

Follow the on-screen prompts to:
1. Choose a shape to draw
2. Enter dimensions (length, width, height, radius, etc.)
3. Select a character for drawing
4. View the ASCII art output
5. Optionally redraw with new parameters or clear the console

## Example

```
         Shape Artistry!
   Interactive Drawing with C++

       Which Shape would you like to draw ?
1 - Square
2 - rectangle
3 - triangle
4 - circle
5 - hexagon
q - quit
```

## Contributing

Feel free to fork this project and submit pull requests with improvements or additional shape support.

## License

This project is open source. Feel free to use and modify as needed.