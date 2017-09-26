#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <ctime>
#include <iostream>

#include "Client.h"
#include "Transaction.h"
#include "MyDateTime.h"

// forward declaration
class Client;

class Account
{
public:
	static constexpr int MAX_NUM_OF_CLIENT = 10;
	static constexpr int MAX_NUM_OF_TRANSACTIONS = 1000;
	static constexpr int MAX_OVERDRAFT = 10000;

	static constexpr int YOUNG_TRANSACTION_FEE = 0; // free
	static constexpr int REGULAR_TRANSACTION_FEE = 10;
	static constexpr int BUSINESS_TRANSACTION_FEE = 5;

	enum eType {YOUNG, REGULAR, BUSINESS};


	Account(eType type = eType::REGULAR);

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Account& account);

	// Getters & Setters
	int getNumber() const;
	bool setType(eType type); // bool because regular or business can't became young again
	eType getType() const;
	bool setBalance(float sum);
	float getBalance() const;
	MyDateTime getStart() const;

	// Methods
	float checkBalance() const;
	bool addClient(const Client& client);
	void deposit(float sum);
	bool withraw(float sum);
	bool transfer(float sum, Account& toAccount);

private:
	static int generateID;

	int number; // number = ++generateID
	eType type;
	float balance;
	MyDateTime start;
	Client* arrClient[MAX_NUM_OF_CLIENT];
	Transaction* arrTransactions[MAX_NUM_OF_TRANSACTIONS];
	int numOfClient;
	int numOfTransaction;
};
int Account::generateID = 0;

#endif //__ACCOUNT_H