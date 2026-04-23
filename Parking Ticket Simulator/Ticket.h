#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Officer.h"

using namespace std;
//class Officer;

class Ticket
{
private:
	double fine;
	const double val = 1 / 60;
	ParkedCar& pc;
	ParkingMeter& pm;
	//int time_diff;

public:

	Ticket(ParkingMeter& pmref, ParkedCar& pcref);

	double SetFine(ParkingMeter pm, ParkedCar pc);


	void Print(ParkedCar pc, ParkingMeter pm, string offName, string offNum);


};

#endif