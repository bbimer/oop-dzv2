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

    College(College&& other) noexcept;

    College& operator=(College&& other) noexcept;

    void setContact(const char* contact1);
    void setName(const char* name1);

    void print() const;
};