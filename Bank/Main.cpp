#include <iostream>
using namespace std;

#include "Account.h"
#include "Address.h"
#include "Bank.h"
#include "Branch.h"
#include "Client.h"
#include "Deposit.h"
#include "Person.h"
#include "Transaction.h"
#include "Transfer.h"
#include "Withraw.h"
#include "Worker.h"
#include "WorkerClient.h"

int main(int argc, const char * argv[])
{
	cout << "Welcome to our Bank !!!" << endl;

	Bank bank("Israel Bank", 1);

	Branch jerusalemBranch(Address("Jerusalem", "yafo", 92, 9200092), 10, "Jerusalem");
	Branch telAvivBranch(Address("Tel Aviv", "Alenbi", 64, 6400064), 20, "Tel Aviv");

	/// change time
	Client client1("Client 1", 111111111, time_t(), time_t(), Address("Jerusalem", "yafo", 93, 9300093));
	Client client2("Client 2", 222222222, time_t(), time_t(), Address("Tel Aviv", "Alenbi", 65, 6500065));

	Worker worker1("worker1", 10001, time_t(), time_t(), Address("Jerusalem", "yafo", 94, 9400094));
	Worker worker2("worker2", 20001, time_t(), time_t(), Address("Tel Aviv", "Alenbi", 66, 6600066));

	WorkerClient workerClient1("workerClient1", 10002, time_t(), time_t(), Address("Jerusalem", "yafo", 95, 9500095));
	WorkerClient workerClient2("workerClient2", 20002, time_t(), time_t(), Address("Tel Aviv", "Alenbi", 67, 6700067));

	Account account1(100);
	Account account2(101);
	Account account3(102);
	Account account4(103);

	client1.addAccount(account1);
	client2.addAccount(account2);
	workerClient1.addAccount(account3);
	workerClient2.addAccount(account4);

	jerusalemBranch.addClient(client1);
	jerusalemBranch.addWorker(worker1);
	jerusalemBranch.addWorkerClient(workerClient1);

	telAvivBranch.addClient(client2);
	telAvivBranch.addWorker(worker2);
	telAvivBranch.addWorkerClient(workerClient2);

	bank.addBranch(telAvivBranch);
	bank.addBranch(jerusalemBranch);

	bank.paySalaries();
	bank.payBonus();

	client1.getArrAccounts.check

	//Deposit* d = new Deposit(1, 2, 200);
	//Withraw* w = new Withraw(1, 2, 200);
	//Transfer* t = new Transfer(1, 2, 500, 7);

	system("pause");

} // end main

