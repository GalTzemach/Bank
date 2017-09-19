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

	// operators overloading
	// friend ostream& operator<<(ostream& os, const Deposit& deposit);

	// methods

}; // end class Deposit

#endif // __DEPOSIT_H
