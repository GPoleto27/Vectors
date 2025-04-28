# Vectors

A C++ library for 3-dimensional vectors and polygons, developed for computer graphics study purposes.

## Clone the repository
```bash
git clone https://github.com/GPoleto27/Vectors.git
cd Vectors
```

## Build and Run

Use the provided Makefile to compile and run the project:

### Compile
```bash
make
```

### Run
```bash
make run
```

### Clean (remove compiled files)
```bash
make clean
```

## Usage
- Edit `main.cpp` to create your own test cases or examples.
- Rebuild and run using `make run` to see the results.

## Project Structure
```
Vectors/
├── Makefile
├── Vector3.h
├── Vector3.cpp
├── Polygon.h
├── Polygon.cpp
├── main.cpp
└── README.md
```

## Features

- **Vector3**
  - Addition, subtraction, scalar multiplication/division
  - Normalization
  - Dot and cross products
  - Triple scalar product
  - Angle and cosine of angle between vectors
  - Length (magnitude) calculation

- **Polygon**
  - Constructed from three vertices
  - Normal vector computation
  - Centroid calculation
  - Area calculation
  - Flat shading intensity based on a ray direction

## Notes
- The code is written in modern C++17.
- The project uses `-Wall -Wextra` compiler flags for best practices and safety.
- Optimizations are enabled with `-O2`.
