## Starting File Dispatcher Watcher from Mac Local to Docker
> make start

## __Notes__
1. ### __Essential C and C++ Concepts__
    1. __Pointers__
       1. What ever may be the data tupe of the pointer, the size it will take is **8 bytes** for 64 bit machines, earlier it was 4 bytes. [Code Available](src/pointer.cpp)
    2. __Pointer to Structure__
       1. [Code Available](src/pointer-to-structure.cpp)
    3. __Fucntion__
       1. Writing a program using fuction is called **Modular programming**.
       2. Passing parameter Methods
          1. Call by Value
          2. Call by Address
             1. **Array as Parameter**: Array can be pass by address. [Code Available](src/array-as-parameter.cpp)
          3. Call by Reference
2. ### Essential C and C++ Concepts

## Project structure
```.
├── Dockerfile
├── Makefile
├── README.md
├── build-watcher.sh
├── file-dispatcher-watcher.sh
├── index.sh
└── src
    ├── array-as-parameter.cpp
    ├── array.cpp
    ├── pointer-to-structure.cpp
    └── pointer.cpp

1 directory, 10 files
```