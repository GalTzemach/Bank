#ifndef __TRANSACTION_H
#define __TRANSACTION_H

#include <ctime>
#include <iostream>

class Transaction // Abstract
{
private:
	static int generateID;

protected:
	int TransactionID;
	int clientID;
	int accountNumber;
	time_t date;
	float sum;

	// constructors
	Transaction(int clientID, int accountNumber, float sum); // time = current time (time(0))

public:
	// distructor
	virtual ~Transaction();

	// operators overloading
	// friend ostream& operator<<(ostream& os, const Transaction& transaction);

	// methods

}; // end class Transaction
int Transaction::generateID = 0;

#endif // __TRANSACTION_H