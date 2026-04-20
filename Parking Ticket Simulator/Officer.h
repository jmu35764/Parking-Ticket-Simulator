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
	Ticket ticket;

	
	/*bool violation() const
	{
		if (parkedcar.Get_MinParked() > parkingmeter.Get_MinPurch())
		{
			return true;
		}

		else
		{
			cout << "There is no parking violation" << endl;
			return false;
		}
	}*/

	void MakeTicket()
	{
		if (parkedcar.Get_MinParked() > parkingmeter.Get_MinPurch())
		{
			ticket.SetFine(parkingmeter, parkedcar);
			ticket.Print(parkedcar, parkingmeter, Off_Name, Off_Badge);
		}

		else
		{
			cout << "There is no violation " << endl;
		}
		
	}

public:

	Officer(string OffN, string OffB, string make, string model, string color,
		string licensenum, int min_parked, int min_purch)
	{
		Off_Name = OffN;
		Off_Badge = OffB;
		parkedcar.SetCarInfo(make, model, color, licensenum, min_parked);
		parkingmeter.SetMeter(min_purch);

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