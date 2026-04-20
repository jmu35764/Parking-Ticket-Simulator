#ifndef OFFICER_H
#define OFFICER_H

#include <string>
#include <iostream>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"

using namespace std;

class Officer
{
private:
	string Off_Name;
	string Off_Badge;
	ParkedCar parkedcar;
	ParkingMeter parkingmeter;
	//Ticket ticket;

	
	bool violation(ParkedCar pc, ParkingMeter pm) const
	{
		if (pc.Get_MinParked() > pm.Get_MinPurch())
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	/*Ticket MakeTicket(ParkedCar pc, ParkingMeter pm)
	{
		if (violation(pc, pm) == true)
		{
			ticket
		}

		else return 0;
	}*/

public:

	Officer(string OffN = " ", string OffB = " ")
	{
		Off_Name = OffN;
		Off_Badge = OffB;
	}

	void SetOff(string OffN, string OffB)
	{
		Off_Name = OffN;
		Off_Badge = OffB;
	}

	void Print()
	{
		cout << "Officer: " << Off_Name << endl;
		cout << "Badge Number: " << Off_Badge << endl;
	}
};


#endif