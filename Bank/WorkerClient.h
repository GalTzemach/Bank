#ifndef __WORKER_CLIENT_H
#define __WORKER_CLIENT_H

#include <iostream>

class WorkerClient : public Worker, public Client
{
private:
	float discountPercent; // Initialized according to worker type

public:
	static constexpr float DISCOUNT_PERCENT_MAINTENACE = 3;
	static constexpr float DISCOUNT_PERCENT_REGULAR = 5;
	static constexpr float DISCOUNT_PERCENT_MANAGER = 10;

	WorkerClient(const Worker&,const Client&);
	WorkerClient(const WorkerClient& other) = delete;

	// Operators overloading
	friend ostream& operator<<(ostream& os, const WorkerClient& workerClient);

	// Getters & Setters
	bool setDiscountPercent(float newDiscountPercent); // Can change later
	float getDiscountPercent() const;

	// Methods
	void calculateDiscount();
};

#endif // __WORKER_CLIENT_H