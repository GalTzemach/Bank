#ifndef __WITHRAW_H
#define __WITHRAW_H

#include <ctime>
#include <iostream>
#include "Transaction.h"

class Withraw : public Transaction
{
public:
	// constructors
	Withraw(int clientID, int accountNumber, int sum);

	// operators overloading
	// friend ostream& operator<<(ostream& os, const Withraw& withraw);

	// methods

}; // end class Withraw

#endif // __WITHRAW_H