cmake_minimum_required(VERSION 3.5)
project(segundoparcial_horrockskobelt)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp email.h MailManager.h MailManager.cpp nodo.h Lista.h)
add_executable(segundoparcial_horrockskobelt ${SOURCE_FILES})