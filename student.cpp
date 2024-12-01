#include "studen.h"
#include <iostream>
#include <cstring>
using namespace std;


Student::Student(Student&& other) noexcept
    : PIB(other.PIB), dateOfBirth(other.dateOfBirth), contact(other.contact), college(other.college) {

    other.PIB = nullptr;
    other.dateOfBirth = nullptr;
    other.contact = nullptr;
    other.college = nullptr;
}

Student& Student::operator=(Student&& other) noexcept {
    if (this != &other)
    {
        delete[] PIB;
        delete[] dateOfBirth;
        delete[] contact;
        delete[] college;

        PIB = other.PIB;
        dateOfBirth = other.dateOfBirth;
        contact = other.contact;
        college = other.college;

        other.PIB = nullptr;
        other.dateOfBirth = nullptr;
        other.contact = nullptr;
        other.college = nullptr;
    }
    return *this;
}

void Student::setPIB(const char* pib) {
    delete[] PIB;
    size_t size1 = strlen(pib) + 1;
    PIB = new char[size1];
    for (size_t i = 0; i < size1; ++i)
    {
        PIB[i] = pib[i];
    }
}

void Student::setDateOfBirth(const char* date) {
    delete[] dateOfBirth;
    size_t size2 = strlen(date) + 1;
    dateOfBirth = new char[size2];
    for (size_t i = 0; i < size2; ++i)
    {
        dateOfBirth[i] = date[i];
    }
}

void Student::setContact(const char* number) {
    delete[] contact;
    size_t size3 = strlen(number) + 1;
    contact = new char[size3];
    for (size_t i = 0; i < size3; ++i)
    {
        contact[i] = number[i];
    }
}

void Student::setCollege(const char* name) {
    delete[] college;
    size_t size4 = strlen(name) + 1;
    college = new char[size4];
    for (size_t i = 0; i < size4; ++i)
    {
        college[i] = name[i];
    }
}


void Student::print() const {
    cout << endl << "PIB: " << (PIB ? PIB : "none") << endl;
    cout << "Date of birth: " << (dateOfBirth ? dateOfBirth : "none") << endl;
    cout << "Contacts: " << (contact ? contact : "none") << endl;
    cout << "College: " << (college ? college : "none") << endl;
}
