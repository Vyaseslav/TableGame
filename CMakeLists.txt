cmake_minimum_required(VERSION 3.25)
project(TableGame)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.12.12\\5.12.12\\mingw73_64\\lib\\cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(TableGame main.cpp gameMainWindow.h gameMainWindow.cpp saveLoader.h saveLoader.cpp Game.ui)
target_link_libraries(TableGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )
