# PyBind11 & Conan Template Project

A template for quickly getting started with [PyBind11](https://github.com/pybind/pybind11) and [Conan](https://conan.io/)

## Prerequisite

* Conan must be installed for the current user
* CMake Tools Extension for Visual Studio Code

## Usage

### VSCode

* Open Command Palette (`Ctrl + Shift + P`)
* Execute `Tasks: Run Task`
* Select `Configure with conan`
* Ignore the error message "Cannot substitute command variable..."
* Build Project using `F7`

### Manual Setup

```bash
mkdir build && cd build
conan install ..
cmake ..
```
