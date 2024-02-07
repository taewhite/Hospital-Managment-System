cmake_minimum_required(VERSION 3.27)
project(Hospital_Manegment_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hospital_Manegment_System main.cpp
        patient.cpp
        patient.h
        appointment.cpp
        appointment.h
        doctor.cpp
        doctor.h
        nurse.cpp
        nurse.h
        hospital.cpp
        hospital.h)
