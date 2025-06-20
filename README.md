# Art project
A simple C++ painting app using [Raylib](https://www.raylib.com/).  
You can draw by clicking on a grid and select colors using buttons.

# Features
- Grid-based pixel painting
- UI buttons for selecting color
- OOP structure
- Unit tests using GoogleTest


# Build instructions
## Dependencies
- CMake ≥ 3.14
- A C++ compiler (GCC, Clang, or MSVC)

## How to Build (with CMake):
Download and the repository by clicking *"Download ZIP"* **OR** ```git clone https://github.com/H4elme/Art``` <br/>
Inside of the repository:
```
git clone https://github.com/google/googletest.git    
mkdir build
cd build
cmake ..
cmake --build .
```

## How to run:
Go to *"build"* directory <br/>
Double click *main.exe* (windows) or run in terminal *./main.exe*

# To Build and Run Tests:
```
mkdir build
cd build
cmake ..
cmake --build .
ctest
```