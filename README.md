# Problem Solving Working Space
In this directory we design a working space for c++ problem solving. We compile source files using CMake and we added clang format to keeps source files in a consistent coding style. 


###Compilation 

To compile and run source file :
Clone this repository and run the following commands: 
```sh
mkdir build && cd build 
cmake ..
make 
```
All files will be compiled and executables will bin generated in bin folder under the smae name of source file. 
To compile a specific file : example problem.cpp :
```sh
cmake -DFILE_NAME=problem.cpp ..
make 
```
To enable the formatting of source files, add the following flag to the cmake : 
```sh
cmake -DFORMAT=TRUE ..
make 
```
