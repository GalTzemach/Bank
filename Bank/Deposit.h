#ifndef __DEPOSIT_H
#define __DEPOSIT_H

#include <ctime>
#include <iostream>
#include "Transaction.h"

class Deposit : public Transaction
{
public:
	// constructors
	Deposit(int clientID, int accountNumber, int sum);

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Deposit& deposit);

	// Getters & Setters

	// Methods

};

#endif // __DEPOSIT_H
