#ifndef __WORKER_H
#define __WORKER_H

#include <iostream>

class Worker : virtual public Person
{
public:
	static constexpr int BONUS_PERCENT = 10;
	enum eType {MAINTENACE, REGULAR, MANAGER};

protected:
	float salary;
	eType type;

public:
	Worker(const char* name, int id, const MyDateTime& birthDay, const Address& address, float salary, const eType type = eType::REGULAR);

	// Operators overloading
	friend ostream& operator<<(ostream& os, const Worker& worker);

	// Getters & Setters
	bool setSalary(float newSalary);
	float getSalary() const;
	void setType(eType type);
	eType getType() const;
	
	// Methods

};

#endif // __WORKER_H