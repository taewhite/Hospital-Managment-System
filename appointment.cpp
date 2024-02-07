//
// Created by Dante White on 12/11/23.
//

#include "appointment.h"

Appointment::Appointment(std::string date, std::string time, std::string illness, std::string medication)
        : date(date), time(time), illness(illness), medication(medication) {}

std::string Appointment::getDate() const
{
    return date;
}

std::string Appointment::getTime() const
{
    return time;
}

std::string Appointment::getIllness() const
{
    return illness;
}

std::string Appointment::getMedication() const
{
    return medication;
}

void Appointment::display() const
{
    std::cout << "Date: " << date << "\nTime: " << time << "\nIllness: " << illness << "\nMedication: " << medication << "\n\n";
}