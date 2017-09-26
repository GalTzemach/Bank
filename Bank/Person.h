#ifndef __PERSON_H
#define __PERSON_H

#include <ctime>
#include <iostream>

#include "Address.h"
#include "MyDateTime.h"

// Abstract
class Person
{
protected:
	char* name;
	int id;
	MyDateTime birthDay, startDay; // startDay = current date
	Address address;
	bool isActive;

	Person(const char* name, int id, const MyDateTime birthDay, const Address& address);

public:
	Person(const Person& other) = delete;
	virtual ~Person();

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Person& person);

	// Getters & Setters
	bool setName(const char* name);
	const char* getName() const;
	int getId() const;
	const MyDateTime& getBirthDay() const;
	const MyDateTime& getStartDay() const;
	void setAddress(const Address& address);
	const Address& getAddress() const;
	void setIsActive(bool isActive);
	bool getIsActive() const;

	// Methods

};

#endif // __PERSON_H