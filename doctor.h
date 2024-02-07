//
// Created by Dante White on 12/11/23.
//

// Doctor.h

// Serialization
// doctor.h

##ifndef DOCTOR_H
#define DOCTOR_H

#include <iostream>
#include <string>
#include <vector>

class Doctor {
private:
    std::string name;
    std::string specialization;
    std::vector<std::string> acceptedInsurances;

public:
    // Constructors
    Doctor();  // Default constructor
    std::string getName() const;
    Doctor(const std::string& name, const std::string& specialization, const std::vector<std::string>& insurances);

    // Other member functions, getters, setters, etc.

    // Serialization functions
    void serialize(std::ostream& stream) const;
    void deserialize(std::istream& stream);

    // ...
    Doctor(const char string[10], const char string1[13], const char string2[11], const char string3[11]);
};

#endif // DOCTOR_H
