#include <string>
#include <iostream>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"

using namespace std;

Ticket::Ticket(ParkingMeter& pmref, ParkedCar& pcref) : pc(pcref), pm(pmref)
{
	fine = SetFine(pmref, pcref);
}

double Ticket::SetFine(ParkingMeter pm, ParkedCar pc)
{
	fine = 25 + ceil(((pc.Get_MinParked() - pm.Get_MinPurch()) - 60) * 0.0166) * 10;

	return fine;
}

void Ticket::Print(ParkedCar pc, ParkingMeter pm, string offName, string offNum)
{
	pc.Print();
	pm.Print();
	cout << "Parking Fine: " << fine << endl;
	cout << "Officer Name: " << offName << endl;
	cout << "Officer Number: " << offNum << endl;

}