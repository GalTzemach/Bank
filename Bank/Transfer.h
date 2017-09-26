#ifndef __TRANSFER_H
#define __TRANSFER_H

#include <ctime>
#include <iostream>
#include "Transaction.h"

class Transfer : public Transaction
{
private:
	int toAccountNumber;

public:
	Transfer(int clientID, int accountNumber, int sum, int toAccountNumber);

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Transfer& transfer);

	// Getters & Setters
	int getToAccountNumber() const;

	// Methods

};

#endif // __TRANSFER_H