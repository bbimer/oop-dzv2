#include "contact.h"
#include <iostream>
using namespace std;


Contact::Contact(Contact&& other) noexcept
    : phn(other.phn), lct(other.lct), cntr(other.cntr) {

    other.phn = nullptr;
    other.lct = nullptr;
    other.cntr = nullptr;
}

Contact& Contact::operator=(Contact&& other) noexcept {
    if (this != &other)
    {
        delete[] phn;
        delete[] lct;
        delete[] cntr;

        phn = other.phn;
        lct = other.lct;
        cntr = other.cntr;

        other.phn = nullptr;
        other.lct = nullptr;
        other.cntr = nullptr;
    }
    return *this;
}

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
    cout << "Phone number: " << (phn ? phn : "none") << endl;
    cout << "Location: " << (lct ? lct : "none") << endl;
    cout << "Country: " << (cntr ? cntr : "none") << endl;
}
