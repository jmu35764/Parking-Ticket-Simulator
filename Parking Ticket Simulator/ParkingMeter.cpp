#include <string>
#include <iostream>
#include "ParkingMeter.h"
using namespace std;

ParkingMeter::ParkingMeter(double min_pch)
{
	minutes_purchased = min_pch;
}

void ParkingMeter::SetMeter(double min_pch)
{
	minutes_purchased = min_pch;
}

double ParkingMeter::Get_MinPurch() const
{
	return minutes_purchased;
}

void ParkingMeter::Print()
{
	cout << "Minutes Purchased: " << minutes_purchased << endl;
}