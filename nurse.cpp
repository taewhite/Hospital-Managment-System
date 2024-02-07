//
// Created by Dante White on 12/11/23.
//

#include <iostream>
#include <string>

class Nurse
{
private:
    std::string name;
    int yearsOfService;

public:
    Nurse(const std::string &name, int yearsOfService) : name(name), yearsOfService(yearsOfService) {}

    void assistPatient()
    {
        std::cout << "Nurse " << name << " is assisting the patient." << std::endl;
    }

    void administerMedication()
    {
        std::cout << "Nurse " << name << " is administering medication." << std::endl;
    }

    void printDetails()
    {
        std::cout << "Nurse Details: Name - " << name << ", Years of Service - " << yearsOfService << " years." << std::endl;
    }
};
//
// Created by Dante White on 1/6/24.
//
