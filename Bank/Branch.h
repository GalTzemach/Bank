#ifndef __BRANCH_H
#define __BRANCH_H

#include <iostream>

#include "Address.h"
#include "Worker.h"
#include "Client.h"
#include "WorkerClient.h"
#include "Account.h"

class Branch
{
public:
	static constexpr int MAX_NUM_OF_CLIENTS = 100;
	static constexpr int MAX_NUM_OF_WORKERS = 10;
	static constexpr int MAX_NUM_OF_ACCOUNTS = 100;

	Branch(const char *name, const Address& address);
	Branch(const Branch& other) = delete;
	~Branch();

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Branch& branch);

	// Getters & Setters
	const char* getName() const;
	int getNumber() const;
	void setAddress(const Address& address);
	const Address& getAddress() const;

	// Methods
	bool addClient(const Client& client);
	bool addWorker(const Worker& worker);
	bool addWorkerClient(const WorkerClient& workerClient); // Add to arrWorkers (Polymorphism)
	bool addAccount(const Account& account);
	void paySalaries();
	void payBonus(); // bonus = PERCENT_OF_THE_SALARY % of the salary.
	void alertOnOverdraft();
	void alertOnOverBalance();

private:
	static int generateID;

	char* name;
	int number; // number = ++generateID
	Address address;
	Client* arrClients[MAX_NUM_OF_CLIENTS];
	Worker* arrWorkes[MAX_NUM_OF_WORKERS]; // This arr include workerClients too
	Account* arrAcoounts[MAX_NUM_OF_ACCOUNTS];
	int numOfClients;
	int numOfWorkers;
	int numOfAccounts;
};
int Branch::generateID = 0;

#endif // __BRANCH_H