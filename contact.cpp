#include "contact.h"
#include <iostream>
using namespace std;

void Contact::setPhoneNumber(const char* num) {
    delete[] phn;
    size_t size1 = strlen(num) + 1;
    phn = new char[size1];
    for (size_t i = 0; i < size1; ++i)
    {
        phn[i] = num[i];
    }
}

void Contact::setPlace(const char* place) {
    delete[] lct;
    size_t size2 = strlen(place) + 1;
    lct = new char[size2];
    for (size_t i = 0; i < size2; ++i)
    {
        lct[i] = place[i];
    }
}

void Contact::setCountry(const char* country) {
    delete[] cntr;
    size_t size3 = strlen(country) + 1;
    cntr = new char[size3];
    for (size_t i = 0; i < size3; ++i)
    {
        cntr[i] = country[i];
    }
}


void Contact::print() const {
    cout << "Phone number: " << phn << endl;
    cout << "Location: " << lct << endl;
    cout << "Country: " << cntr << endl;
}
