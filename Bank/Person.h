#ifndef __PERSON_H
#define __PERSON_H

#include "Address.h"
#include <ctime>

class Person
{
public:

protected:
	char* name;
	int id;
	time_t birthDay, startDay;
	Address address;
	bool isActive;

	Person(char * name, int id, time_t birthDay, Address address, bool isActive = true);

public:
	Person(const Person& other);
	virtual ~Person();

	// Getters & Setters
	bool setName(const char* const name);
	const char* const getName() const;
	int getId() const;
	const time_t& getBirthDay() const;
	const time_t& getStartDay() const;
	bool setAddress(const Address& address);
	const Address& getAddress() const;
	void setIsActive(bool isActive);
	bool getIsActive() const;

	// Methods

};

#endif // __PERSON_H