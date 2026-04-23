#ifndef OFFICER_H
#define OFFICER_H

#include <string>
#include <iostream>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"

using namespace std;
class Ticket;  //Forward Declaration

class Officer
{
private:
	string Off_Name;
	string Off_Badge;
	ParkedCar& parkedcar;
	ParkingMeter& parkingmeter;

public:

	//Constructor
	Officer(string OffN, string OffB, ParkedCar& pcref, ParkingMeter& pmref);


	//Checks the Car and Meter time difference
	void Inspect();

};

#endif