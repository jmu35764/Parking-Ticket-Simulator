#include <string>
#include <iostream>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"

using namespace std;

Ticket::Ticket(ParkingMeter& pmref, ParkedCar& pcref) : pc(pcref), pm(pmref)
{
	//  Get Fine Value
	fine = SetFine(pmref, pcref);
}

double Ticket::SetFine(ParkingMeter pm, ParkedCar pc)
{
	// Starts at 25$ for first hour over, then increases by 
	// 10$ for each consecutive hour
	fine = 25 + ceil(((pc.Get_MinParked() - pm.Get_MinPurch()) - 60) * 0.0166) * 10;

	return fine;
}

void Ticket::Print(ParkedCar pc, ParkingMeter pm, string offName, string offNum)
{
	// Parked Car Info
	pc.Print();

	// Parking Meter Info
	pm.Print();
	cout << "Parking Fine: " << fine << endl;
	cout << "Officer Name: " << offName << endl;
	cout << "Officer Number: " << offNum << endl;

}