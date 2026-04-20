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
	ParkedCar parkedcar;
	ParkingMeter parkingmeter;
	Officer officer;

public:
	Ticket(int f = 0, string model, )
	{
		fine = f;
	}

	int SetFine()
	{
		if ((parkingmeter.Get_MinPurch() - parkedcar.Get_MinParked()) %60 == 0)
		{
			fine = 25 + ((parkingmeter.Get_MinPurch() - parkedcar.Get_MinParked()) - 60) / 6;
		}
		
		else
		{
			fine = 35 + ((parkingmeter.Get_MinPurch() - parkedcar.Get_MinParked()) - 60) / 6;
		}


		//fine = 10 / 3;

		return fine;
	}

	void Print()
	{
		cout << "Car information: " << endl;
		parkedcar.Print();
		cout << endl;
		parkingmeter.Print();
		cout << "Fine: " << fine << endl;
		cout << "Officer Informaiton: " << endl;
		officer.Print();
	}

};

#endif