#ifndef __CLIENT_H
#define __CLIENT_H

#include "Person.h"
#include "Account.h"

/// forward declaration
class Account;

class Client : virtual public Person
{

protected:
	Account* arrAccounts;

public:
	Client(char * name, int id, time_t birthDay, time_t startDay, Address address, bool isActive = true);
	//Client(const Client& other);
	//virtual v~Client();

	// Getters & Setters
	Account* getArrAccounts();

	// Methods
	bool addAccount(const Account& account);
	bool removeAccount(int clientId);
};

#endif // __CLIENT_H