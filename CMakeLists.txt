cmake_minimum_required(VERSION 3.12)
project(ZAD_2_zmpo)

set(CMAKE_CXX_STANDARD 98)

add_executable(ZAD_2_zmpo main.cpp CMenuItem.h CMenu.h CMenuItem.cpp CMenu.cpp CCommand.h CMenuCommand.h CMenuCommand.cpp CCommand.cpp CTABLE/CTable.h CTABLE/CTable.cpp)