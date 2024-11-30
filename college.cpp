#include "college.h"
#include <iostream>
using namespace std;

void College::setName(const char* name1) {
	delete[] NAME;
	size_t size1 = strlen(name1) + 1;
	NAME = new char[size1];
	for (size_t i = 0; i < size1; ++i)
	{
		NAME[i] = name1[i];
	}
}

void College::setContact(const char* contact1) {
	delete[] cnt;
	size_t size2 = strlen(contact1) + 1;
	cnt = new char[size2];
	for (size_t i = 0; i < size2; ++i)
	{
		cnt[i] = contact1[i];
	}
}

void College::print() const {
	cout << endl << "College contact: " << cnt << endl;
	cout << "College name: " << NAME << endl;
}
