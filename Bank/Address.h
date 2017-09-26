#ifndef __ADDRESS_H
#define __ADDRESS_H

#include <iostream>

class Address
{
private:
	char *city, *street;
	int number, zip;

public:
	Address(const char* city, const char* street, int number, int zip);
	Address(const Address& address) = delete;
	~Address();

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Address& address);

	// Getters & Setters
	const char* getCity() const;
	const char* getStreet() const;
	int getNumber() const;
	int getZip() const;
	
	// Methods

};

#endif //__ADDRESS_H