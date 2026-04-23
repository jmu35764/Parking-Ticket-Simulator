#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
#include <iostream>
using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	string license_number;
	double minutes_parked;

public:
	
	// Constructor
	ParkedCar(string mk = " ", string mdl = " ", string clr = " ", string ln = " ", double m_pk = 0);

	// Setter (ended up not being necesary)
	void SetCarInfo(string mk, string mdl, string clr, string ln, double m_pk);

	// Getter (To check if values matched what was entered)
	double Get_MinParked() const;

	// Prints Car Info
	void Print();

};



#endif 

