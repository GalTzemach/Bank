#ifndef __MY_DATE_TIME_H
#define __MY_DATE_TIME_H

#include <iostream>

class MyDateTime
{
private:
	int year, month, day;
	int hour, minute, second;

public:
	MyDateTime(int year, int month, int day, int hour, int minute, int second);
	MyDateTime(const MyDateTime& myDateTime) = delete;

	// Operators overloading
	friend ostream& operator<<(ostream& os, const MyDateTime& myDateTime);

	// Getters & Setters
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	// Methods

};

#endif //__MY_DATE_TIME_H