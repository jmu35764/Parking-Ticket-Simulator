#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Officer.h"

using namespace std;

class Ticket
{
private:
	int fine;
	int time_diff;

public:
	Ticket(int f = 0)
	{
		fine = f;
	}

	int SetFine(ParkedCar pc, ParkingMeter pm)
	{
		return pc.Get_MinParked() - pm.Get_MinPurch();
	}

};

#endif