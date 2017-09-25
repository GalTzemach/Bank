#ifndef __WORKER_H
#define __WORKER_H

#include "Person.h"

class Worker : virtual public Person
{
public:
	static constexpr int PERCENT_OF_THE_SALARY = 10;
	enum eType { MAINTENACE, REGULAR, MANAGER };

protected:
	float salary;
	eType type;

public:
	Worker(char *name, int id, time_t birthDay, Address address, float salary, eType type = eType::REGULAR, bool isActive = true);

	// Getters & Setters
	float getSalary() const;
	bool setSalary(float newSalary);
	eType getType() const;
	bool setType(eType type);
	
};

#endif // __WORKER_H