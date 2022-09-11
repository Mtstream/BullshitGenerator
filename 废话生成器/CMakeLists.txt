cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/Resolve/Resolve.cpp src/Resolve/Resolve.h src/Syntactic/AlsoDo.cpp src/Syntactic/AlsoDo.h src/Syntactic/AlthoughDo.cpp src/Syntactic/AlthoughDo.h src/Syntactic/DoIf.cpp src/Syntactic/DoIf.h src/Component/Logical.cpp src/Component/Logical.h src/Component/Element.cpp src/Component/Element.h)
