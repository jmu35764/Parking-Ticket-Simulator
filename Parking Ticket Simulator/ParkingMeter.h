#ifndef PARKINGMETER_H
#define PARKINGMETER_H

#include <string>
#include <iostream>
using namespace std;

class ParkingMeter
{
private:
	double minutes_purchased;

public:

	friend class Ticket;
	
	ParkingMeter(double min_pch = 0);


	void SetMeter(double min_pch);


	int Get_MinPurch() const;


	void Print();

};

#endif