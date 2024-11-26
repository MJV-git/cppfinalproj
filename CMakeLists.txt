cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        PatientAccount.cpp
        PatientAccount.h
        Surgery.cpp
        Surgery.h
        Pharmacy.cpp
        Pharmacy.h
        Account.cpp
        Account.h
)
