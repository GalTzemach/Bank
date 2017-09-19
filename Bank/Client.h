#ifndef __CLIENT_H
#define __CLIENT_H

#include "Person.h"
#include "Account.h"

class Client : virtual public Person
{

protected:

	Account* arrAccounts;

public:
	Client(char * name, int id, time_t birthDay, time_t startDay, Address address, bool isActive = true);
	//Client(const Client& other);
	//virtual v~Client();

	// Getters & Setters

	// Methods
	bool addAccount(const Account& account);
	bool removeAccount(int clientId);
};

#endif // __CLIENT_H