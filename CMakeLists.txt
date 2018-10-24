cmake_minimum_required(VERSION 3.12)
project(ZAD_2_zmpo)

set(CMAKE_CXX_STANDARD 98)

add_executable(ZAD_2_zmpo main.cpp CMenuItem.h CMenu.h CMenuItem.cpp CMenu.cpp CCommand.h CMenuCommand.h CMenuCommand.cpp CCommand.cpp CTABLE/CTable.h CTABLE/CTable.cpp CTABLE/AddObject.cpp CTABLE/AddObject.h CTABLE/ArrayLength.cpp CTABLE/ArrayLength.h CTABLE/RmObject.cpp CTABLE/RmObject.h CTABLE/RmAll.cpp CTABLE/RmAll.h CTABLE/SetObjName.cpp CTABLE/SetObjName.h CTABLE/AddClone.cpp CTABLE/AddClone.h CTABLE/GetInfo.cpp CTABLE/GetInfo.h CTABLE/SetVal.cpp CTABLE/SetVal.h CTABLE/Zad1.cpp CTABLE/Zad1.h)