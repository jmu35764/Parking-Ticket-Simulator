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
	
	// Constructor
	ParkingMeter(double min_pch = 0);


	void SetMeter(double min_pch);

	// Getter
	double Get_MinPurch() const;

	// Print Mintues purchased
	void Print();

};

#endif