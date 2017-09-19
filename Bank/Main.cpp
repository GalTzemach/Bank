#include <iostream>
using namespace std;

#include "Deposit.h"
#include "Withraw.h"
#include "Transfer.h"

//#include "Account.h"

int main(int argc, const char * argv[])
{
	cout << "Welcome to our Bank !!!" << endl;

	Deposit* d = new Deposit(1, 2, 200);
	Withraw* w = new Withraw(1, 2, 200);
	Transfer* t = new Transfer(1, 2, 500, 7);

	//Account* acc = new Account(10, Account::eType::REGULAR, 0);

	//Worker* w1 = new Worker("worker1", 203203203, time_t(), time_t(), Address("Jerusalem", "yafo", 92, 9292929), Worker::eType);

	//Bank bank("Israel Bank", 100);

	system("pause");

} // end main

