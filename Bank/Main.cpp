#include <iostream>
using namespace std;

#include "Account.h"
#include "Address.h"
#include "Bank.h"
#include "Branch.h"
#include "Client.h"
#include "MyDateTime.h"
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

	Branch jerusalemBranch("Jerusalem", Address("Jerusalem", "yafo", 92, 9200092));
	Branch telAvivBranch("Tel Aviv", Address("Tel Aviv", "Alenbi", 64, 6400064));
	bank.addBranch(telAvivBranch);
	bank.addBranch(jerusalemBranch);

	MyDateTime date1(1980, 1, 1, 0, 0, 0);
	MyDateTime date2(1991, 1, 1, 0, 0, 0);
	MyDateTime date3(1992, 1, 1, 0, 0, 0);
	MyDateTime date4(1993, 1, 1, 0, 0, 0);

	Client client1("Client1", 111111111, date1, Address("Jerusalem", "yafo", 93, 9300093));
	Client client2("Client2", 222222222, date2, Address("Tel Aviv", "Alenbi", 65, 6500065));

	Worker worker1("worker1", 333333333, date3, Address("Jerusalem", "yafo", 94, 9400094), 8000);
	Worker worker2("worker2", 444444444, date4, Address("Tel Aviv", "Alenbi", 66, 6600066), 12000);
	
	Worker worker3("worker3", 555555555, date1, Address("Jerusalem", "yafo", 95, 9500095), 10000);
	Client client3("Client3", 666666666, date1, Address("Jerusalem", "yafo", 95, 9500095));

	Worker worker4("worker3", 777777777, date2, Address("Tel Aviv", "Alenbi", 67, 6700067), 11000);
	Client client4("Client3", 888888888, date2, Address("Tel Aviv", "Alenbi", 67, 67000067));

	WorkerClient workerClient1(worker3, client3);
	WorkerClient workerClient2(worker4, client4);

	Account account1;
	Account account2;
	Account account3;
	Account account4;

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

	bank.paySalaries();
	bank.payBonus();
	bank.alertOnOverdraft();
	bank.alertOnOverBalance();

	account1.checkBalance();
	account2.deposit(300);
	account3.withraw(200);
	account4.transfer(600, account2); // Same branch

	cout << bank;

	system("pause");

} // end main