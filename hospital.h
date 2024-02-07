//
// Created by Dante White on 12/11/23.
//

#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "appointment.h"
#include "patient.h"
#include <vector>

class Hospital
{
private:
    std::vector<Appointment> appointments;
    std::vector<Patient> patients;

public:
    // Methods for managing appointments
    void addAppointment(const Appointment &appointment);
    void displayAppointments() const;

    // Methods for managing patients
    void addPatient(const Patient &patient);
    void displayPatients() const;
};

#endif // HOSPITAL_H
