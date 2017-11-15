cmake_minimum_required(VERSION 3.8)
project(segundoparcial_horrockskobelt)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lista.h nodo.h MailManager.cpp MailManager.h email.h)
add_executable(segundoparcial_horrockskobelt ${SOURCE_FILES})