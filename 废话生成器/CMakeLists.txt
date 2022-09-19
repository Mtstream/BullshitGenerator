cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/Factory/Word.cpp src/Factory/Word.h src/Headers.h src/Factory/WordFactory.cpp src/Factory/WordFactory.h src/Decorator/Decorator.cpp src/Decorator/Decorator.h src/Decorator/AppendLib.cpp src/Decorator/AppendLib.h)
