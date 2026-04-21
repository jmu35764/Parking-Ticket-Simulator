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
	double fine;
	ParkedCar& pc;
	ParkingMeter& pm;
	//int time_diff;

public:
	Ticket(ParkingMeter& pmref, ParkedCar& pcref): pc(pcref), pm(pmref)
	{
		fine = SetFine(pmref,pcref);
	}

	double SetFine(ParkingMeter pm, ParkedCar pc)
	{
		if ((pm.Get_MinPurch() - pc.Get_MinParked()) %60 == 0)
		{
			fine = 25 + ((pm.Get_MinPurch() - pc.Get_MinParked()) - 60) / 6;
		}
		
		else
		{
			fine = 35 + ((pm.Get_MinPurch() - pc.Get_MinParked()) - 60) / 6;
		}
	}

	void Print(ParkedCar pc, ParkingMeter pm, string offName, string offNum)
	{
		pc.Print();
		pm.Print();
		cout << "Parking Fine: " << fine << endl;
		cout << "Officer Name: " << offName << endl;
		cout << "Officer Number: " << offNum << endl;

		
		/*cout << "Car information: " << endl;
		parkedcar.Print();
		cout << endl;
		parkingmeter.Print();
		cout << "Fine: " << fine << endl;
		cout << "Officer Informaiton: " << endl;
		officer.Print();*/
	}

};

#endif