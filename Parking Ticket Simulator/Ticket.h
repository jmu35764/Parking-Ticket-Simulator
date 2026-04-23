#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"

using namespace std;


class Ticket 
{
private:
	double fine;
	ParkedCar& pc;
	ParkingMeter& pm;

public:

	// Constructor
	Ticket(ParkingMeter& pmref, ParkedCar& pcref);

	double SetFine(ParkingMeter pm, ParkedCar pc);

	// Shows information for the ticket
	void Print(ParkedCar pc, ParkingMeter pm, string offName, string offNum);

};

#endif