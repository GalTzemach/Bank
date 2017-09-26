#ifndef __CLIENT_H
#define __CLIENT_H

#include <iostream>

#include "Person.h"
#include "Account.h"

// forward declaration
class Account;

class Client : virtual public Person
{
public:
	static constexpr int MAX_NUM_OF_CLIENT = 10;

	Client(const char *name, int id, const MyDateTime& birthDay, const Address& address);
	Client(const Client& other) = delete;

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Client& client);

	// Getters & Setters

	// Methods
	bool addAccount(const Account& account);

protected:
	Account* arrAccounts[MAX_NUM_OF_CLIENT];

};

#endif // __CLIENT_H