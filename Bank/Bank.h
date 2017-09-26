#ifndef __BANK_H
#define __BANK_H

#include <iostream>

#include "Branch.h"

class Bank
{
public:
	static constexpr int MAX_NUM_OF_BRANCHES = 10;

	Bank(const char *name, int number);
	Bank(const Bank& other) = delete;
	~Bank();

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Bank& bank);

	// Getters & Setters
	const char* getName() const;
	int getNumber() const;

	// Methods
	void paySalaries();
	void payBonus();
	void alertOnOverdraft();
	void alertOnOverBalance();
	bool addBranch(const Branch& branch);
	
private:
	char* name;
	int number;
	Branch* arrBranches[MAX_NUM_OF_BRANCHES];
	int numOfBranches;
};

#endif // __BANK_H