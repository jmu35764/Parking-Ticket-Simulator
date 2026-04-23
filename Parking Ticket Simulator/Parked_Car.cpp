#ifndef TICKET_H
#define TICKET_H

#include <string>
#include <iostream>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"


ParkedCar :: ParkedCar(string mk = " ", string mdl = " ", string clr = " ", string ln = " ", double m_pk = 0)
{
	SetCarInfo(mk, mdl, clr, ln, m_pk);
}

void ParkedCar::SetCarInfo(string mk, string mdl, string clr, string ln, double m_pk)
{
	make = mk;
	model = mdl;
	color = clr;
	license_number = ln;
	minutes_parked = m_pk;
}

int ParkedCar::Get_MinParked() const
{
	return minutes_parked;
}

void ParkedCar::Print()
{
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "License Number: " << license_number << endl;
	cout << "Minutes Parked: " << minutes_parked << endl;
}



#endif 