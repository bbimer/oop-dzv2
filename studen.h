#pragma once

class Student
{
private:
	char* PIB;
	char* dateOfBirth;
	char* contact;
	char* college;

public:
	Student() : PIB(nullptr), dateOfBirth(nullptr), contact(nullptr), college(nullptr) {}
	~Student() {
		delete[] PIB;
		delete[] dateOfBirth;
		delete[] contact;
		delete[] college;
	}

	Student(Student&& other) noexcept;

	Student& operator=(Student&& other) noexcept;

	void setPIB(const char* pib);
	void setDateOfBirth(const char* date);
	void setContact(const char* number);
	void setCollege(const char* name);

	void print() const;
};