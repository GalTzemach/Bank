#ifndef __WORKER_CLIENT_
#define __WORKER_CLIENT_

#include "Client.h"

class WorkerClient : public Worker, public Client
{
private:
	float discountPercent;

public:
	WorkerClient(char * name, int id, time_t birthDay, time_t startDay, Address address, eType type = eType::REGULAR, bool isActive = true);
	//WorkerClient(const WorkerClient& other);
	//~WorkerClient();

	// Getters & Setters
	float getDiscountPercent() const;

	// Methods
	void calculateDiscount();
};

#endif // __WORKER_CLIENT_