#ifndef __TRANSACTION_H
#define __TRANSACTION_H

#include <ctime>
#include <iostream>
#include "MyDateTime.h"

// Abstract
class Transaction 
{
protected:
	static int generateID;

	int TransactionID; 
	int clientID;
	int accountNumber;
	MyDateTime date; // get the current time
	float sum;

	Transaction(int clientID, int accountNumber, float sum);

public:

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Transaction& transaction);

	// Getters & Setters
	int getTransactionId() const;
	int getClientId() const;
	int getAccountNumber() const;
	const MyDateTime& getDate() const;
	float getSum() const;

	// Methods
};
int Transaction::generateID = 0;

#endif // __TRANSACTION_H