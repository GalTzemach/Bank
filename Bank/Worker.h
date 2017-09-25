#ifndef __WORKER_H
#define __WORKER_H

#include "Person.h"

class Worker : virtual public Person
{
public:
	enum eType { MAINTENACE, REGULAR, MANAGER };

protected:
	float cuttentSAlary;
	eType type;

public:
	Worker(char * name, int id, time_t birthDay, time_t startDay, Address address, eType type = eType::REGULAR, bool isActive = true);

	// Getters & Setters
	float getCurrentSalary() const;
	bool setType(eType type);
	eType getType() const;

	// Methods
	void bonus();
	void patSalary();
};

#endif // __WORKER_H