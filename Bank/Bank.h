#ifndef __BANK_H
#define __BANK_H

#include "Branch.h"

class Bank
{
private:
	char* name;
	int number;
	Branch* arrBranches;

public:
	Bank(char *name, int number);
	Bank(const Bank& other);
	~Bank();

	// Getters & Setters
	char* getName() const;
	int getNumber() const;

	// Methods
	void paySalaries();
	void payBonus();
	bool addBranch(const Branch& branch);
	bool removeBranch(int numberOfBranch);
};

#endif // __BANK_H