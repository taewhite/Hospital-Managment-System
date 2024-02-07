//
// Created by Dante White on 12/11/23.
//

#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <iostream>
#include <string>
#include <ctime>

class Appointment
{
private:
    std::string date;
    std::string time;
    std::string illness;
    std::string medication;

public:
    Appointment(std::string date, std::string time, std::string illness, std::string medication);

    // Getters
    std::string getDate() const;
    std::string getTime() const;
    std::string getIllness() const;
    std::string getMedication() const;

    // Display appointment details
    void display() const;
};

#endif // APPOINTMENT_H
