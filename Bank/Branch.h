#ifndef __BRANCH_H
#define __BRANCH_H

#include "Address.h"
#include "Worker.h"
#include "WorkerClient.h"
#include "Account.h"

class Branch
{
private:
	Address address;
	int number;
	char* name;

	Client* arrClients;
	Worker* arrWorkes; // this arr include workerClients
	Account* arrAcoounts;

public:
	Branch(Address address, int number, char *name);
	Branch(const Branch& other);
	~Branch();

	// Getters & Setters
	bool setAddress(const Address& address);
	const Address& getAddress() const;
	int getNumber() const;
	const char* const getName() const;

	bool addClient(const Client& client);
	bool removeClient(int idOfClient);
	bool addWorker(const Worker& worker);
	bool removeWorker(int idOfWorker);
	bool addWorkerClient(const WorkerClient& workerClient);
	bool removeWorkerClient(int idOfWorkerClient);
	bool addAccount(const Account& account);
	bool removeAccount(int numberAccount);
	void paySalaries();
	void payBonus();
};

#endif // __BRANCH_H