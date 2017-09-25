#ifndef __WORKER_CLIENT_
#define __WORKER_CLIENT_

#include "Client.h"

class WorkerClient : public Worker, public Client
{
private:
	float discountPercent = DISCOUNT_PERCENT;

public:
	static constexpr float DISCOUNT_PERCENT = 5;

	WorkerClient(char *name, int id, time_t birthDay, Address address, eType type = eType::REGULAR, bool isActive = true);
	//WorkerClient(const WorkerClient& other);
	//~WorkerClient();

	// Getters & Setters
	float getDiscountPercent() const;
	bool setDiscountPercent(float newDiscountPercent);

	// Methods
	void calculateDiscount();
};

#endif // __WORKER_CLIENT_