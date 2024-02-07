// hospital.cpp
#include "hospital.h"

void Hospital::addAppointment(const Appointment &appointment)
{
    appointments.push_back(appointment);
}

void Hospital::displayAppointments() const
{
    std::cout << "Appointments:\n";
    for (const auto &appointment : appointments)
    {
        appointment.display();
    }
}

void Hospital::addPatient(const Patient &patient)
{
    patients.push_back(patient);
}

void Hospital::displayPatients() const
{
    std::cout << "Patients:\n";
    for (const auto &patient : patients)
    {
        patient.display();
    }
}
