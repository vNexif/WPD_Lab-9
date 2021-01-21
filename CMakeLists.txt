cmake_minimum_required(VERSION 3.17)
project(Lab_9)

set(CMAKE_CXX_STANDARD 14)

set(Menu Menu/menu.h Menu/menu_item.h Menu/menu.cpp Menu/menu_item.cpp )
set(Zadania Zadania/Zadanie91.cpp Zadania/Zadanie91.h Zadania/Zadanie92.cpp Zadania/Zadanie92.h Zadania/Zadanie93.cpp Zadania/Zadanie93.h Zadania/Zadanie94.cpp Zadania/Zadanie94.h Zadania/Zadanie95.cpp Zadania/Zadanie95.h Zadania/Zadanie96.cpp Zadania/Zadanie96.h Zadania/Zadanie97.cpp Zadania/Zadanie97.h)

add_executable(Lab_9 main.cpp ${Menu} ${Zadania})
target_include_directories(Lab_9 PRIVATE Menu)