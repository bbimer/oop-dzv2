#pragma once

class Contact {
private:
    char* phn;
    char* lct;
    char* cntr;

public:
    Contact() : phn(nullptr), lct(nullptr), cntr(nullptr) {}
    ~Contact() {
        delete[] phn;
        delete[] lct;
        delete[] cntr;
    }

    Contact(Contact&& other) noexcept;

    Contact& operator=(Contact&& other) noexcept;

    void setPhoneNumber(const char* num);
    void setPlace(const char* place);
    void setCountry(const char* country);

    void print() const;
};



