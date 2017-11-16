cmake_minimum_required(VERSION 3.8)
project(segundoparcial_horrockskobelt)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES MailManager.cpp MailManager.h email.h main.cpp nodo.h nodo.cpp Lista.cpp Lista.h)
add_executable(segundoparcial_horrockskobelt ${SOURCE_FILES})