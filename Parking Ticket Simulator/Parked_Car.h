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
	
	friend class Ticket;

	ParkedCar(string mk = " ", string mdl = " ", string clr = " ", string ln = " ", double m_pk = 0);


	void SetCarInfo(string mk, string mdl, string clr, string ln, double m_pk);


	int Get_MinParked() const;


	void Print();


};



#endif 

