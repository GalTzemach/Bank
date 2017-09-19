#ifndef __ADDRESS_
#define __ADDRESS_

class Address
{
private:
	char *city, *street;
	int number, zip;

public:
	Address(char* city, char* street, int number, int zip);
	Address(const Address& address);
	~Address();

	// Getters & Setters
	char* getCity() const;
	char* getStreet() const;
	int getNumber() const;
	int getZip() const;
};

#endif //__ADDRESS_