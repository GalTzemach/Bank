#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include <ctime>
#include "Client.h"

// forward declaration
class Client;

class Account
{
public:
	static constexpr int YOUNG_TRANSACTION_PRICE = 0; // free
	static constexpr int REGULAR_TRANSACTION_PRICE = 10; 
	static constexpr int BUSINESS_TRANSACTION_PRICE = 5;

	enum eType { YOUNG, REGULAR, BUSINESS };

private:
	int number;
	eType type;
	float balance;
	time_t start;
	time_t end;

	Client* arrClients;

public:
	Account(int number, eType type = eType::REGULAR, float balance = 0);
	///copy c'tor & d'tor ?

	// Getters & Setters
	bool setType(const eType type);
	eType getType() const;
	bool setBalance(float sum);
	float getBalance() const;
	time_t getStart() const;
	bool setEnd(time_t time);
	time_t getEnd() const;

	// Methods
	bool addClient(const Client client);
	bool removeClient(const Client client);
	float checkBalance() const;
	void deposit(float sum);
	bool withraw(float sum);
	bool transfer(float sum, Account& toAccount);
	void savingPlain(float sum, int numberOfMonths);
	bool loan(float sum, int numberOfMonths);

};

#endif //__ACCOUNT_H