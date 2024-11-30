#pragma once

class College
{
private:
    char* NAME;
    char* cnt;

public:
    College() : NAME(nullptr), cnt(nullptr) {}
    ~College() {
        delete[] NAME;
        delete[] cnt;
    }

    void setContact(const char* contact1);
    void setName(const char* name1);

    void print() const;
};