//
// Created by Jalyn Sinclair on 12/11/23.
//

#include <iostream>
#include <string>

class Doctor
{
private:
    std::string name;
    int experience;

public:
    Doctor(const std::string &name, int experience) : name(name), experience(experience) {}

    void diagnosePatient()
    {
        std::cout << "Dr. " << name << " is diagnosing the patient." << std::endl;
    }

    void prescribeMedication()
    {
        std::cout << "Dr. " << name << " is prescribing medication." << std::endl;
    }

    void printDetails()
    {
        std::cout << "Doctor Details: Name - " << name << ", Experience - " << experience << " years." << std::endl;
    }
};