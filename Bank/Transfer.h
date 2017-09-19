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
	// constructors
	Transfer(int clientID, int accountNumber, int sum, int toAccountNumber);

	// operators overloading
	// friend ostream& operator<<(ostream& os, const Transfer& transfer);

	// methods

}; // end class Transfer

#endif // __TRANSFER_H