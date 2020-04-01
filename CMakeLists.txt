cmake_minimum_required(VERSION 3.16)
project(algorithmic_languages_2_lab_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(algorithmic_languages_2_lab_3
        main.cpp
        thermodynamic_process.h thermodynamic_process.cpp
        isobaric_process.h isobaric_process.cpp
        isohoric_process.h isohoric_process.cpp
)