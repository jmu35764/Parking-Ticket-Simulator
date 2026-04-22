#ifndef OFFICER_H
#define OFFICER_H

#include <string>
#include <iostream>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"

using namespace std;
class Ticket;

class Officer
{
private:
	string Off_Name;
	string Off_Badge;
	ParkedCar& parkedcar;
	ParkingMeter& parkingmeter;
public:

	Officer(string OffN, string OffB, ParkedCar& pcref, ParkingMeter& pmref) :parkedcar(pcref)
		, parkingmeter(pmref), Off_Name(OffN), Off_Badge(OffB) 
	{
		;
	}

	void Inspect()
	{
		if (parkedcar.Get_MinParked() > parkingmeter.Get_MinPurch())
		{
			Ticket* ticket = new Ticket(parkingmeter, parkedcar);
			ticket->Print(parkedcar, parkingmeter, Off_Name, Off_Badge);
			delete ticket;

		}

		else
		{
			cout << "There is no violation " << endl;
		}

	}

	void Print()
	{
		cout << "Officer: " << Off_Name << endl;
		cout << "Badge Number: " << Off_Badge << endl;
	}
};


#endif