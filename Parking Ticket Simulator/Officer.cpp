#include <string>
#include <iostream>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"
#include "Officer.h"

using namespace std;

// Passing values from the ParkedCar class by reference into the constructor
Officer::Officer(string OffN, string OffB, ParkedCar& pcref, ParkingMeter& pmref) :parkedcar(pcref)
, parkingmeter(pmref), Off_Name(OffN), Off_Badge(OffB)
{
	;
}


void Officer::Inspect()
{
	if (parkedcar.Get_MinParked() > parkingmeter.Get_MinPurch())
	{
		// Create a ticket object pointer
		Ticket* ticket = new Ticket(parkingmeter, parkedcar);

		//Print information for ticket
		ticket->Print(parkedcar, parkingmeter, Off_Name, Off_Badge);

		// Clear Data
		delete ticket;

	}

	else
	{
		cout << "There is no violation " << endl;
	}

}

