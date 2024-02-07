//
// Created by Dante White on 12/11/23.
//

// patient.cpp
#ifndef PATIENT_H
#define PATIENT_H

#include "appointment.h"
#include <iostream>
#include <string>
#include <vector>

class Patient
{
private:
    std::string name;
    std::string gender;
    std::string insurance;
    std::vector<Appointment> appointments;

public:
    Patient(std::string name, std::string gender, std::string insurance);

    // Methods for managing appointments
    void addAppointment(const Appointment &appointment);
    void displayAppointments() const;

    // Display patient details
    void display() const;
};

#endif // PATIENT_H