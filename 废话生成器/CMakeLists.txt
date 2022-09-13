cmake_minimum_required(VERSION 3.23)
project("废话生成器")

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled src/main.cpp src/PolyParser/Resolve.cpp src/PolyParser/Resolve.h src/Component/Logical.cpp src/Component/Logical.h src/Component/Element.cpp src/Component/Element.h src/Syntactic/Sentence.cpp src/Syntactic/Sentence.h src/Component/Word.cpp src/Component/Word.h src/Syntactic/Syntactic.cpp src/Syntactic/Syntactic.h src/Headers.h)
