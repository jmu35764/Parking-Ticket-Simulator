#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar
{
private:
	string make;
	string model;
	string color;
	string license_number;
	int minutes_parked;

public:
	ParkedCar(string mk = " ", string mdl = " ", string clr = " ", string ln = " ", int m_pk = 0)
	{
		SetCarInfo(mk, mdl, clr, ln, m_pk);
	}

	void SetCarInfo(string mk, string mdl, string clr, string ln, int m_pk)
	{
		make = mk;
		model = mdl;
		color = clr;
		license_number = ln;
		minutes_parked = m_pk;
	}

	void Print()
	{

	}

};



#endif 

