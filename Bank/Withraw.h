#ifndef __WITHRAW_H
#define __WITHRAW_H

#include <ctime>
#include <iostream>
#include "Transaction.h"

class Withraw : public Transaction
{
public:
	Withraw(int clientID, int accountNumber, int sum);

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Withraw& withraw);

	// Getters & Setters

	// Methods

};

#endif // __WITHRAW_H