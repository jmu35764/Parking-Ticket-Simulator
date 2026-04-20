#ifndef PARKINGMETER_H
#define PARKINGMETER_H

#include <string>
#include <iostream>
using namespace std;

class ParkingMeter
{
private:
	int minutes_purchased;

public:

	friend class Ticket;
	
	ParkingMeter(int min_pch = 0)
	{
		minutes_purchased = min_pch;
	}

	void SetMeter(int min_pch)
	{
		minutes_purchased = min_pch;
	}

	int Get_MinPurch() const
	{
		return minutes_purchased;
	}

	void Print()
	{
		cout << "Minutes Purchased: " << minutes_purchased << endl;
	}
};

#endif