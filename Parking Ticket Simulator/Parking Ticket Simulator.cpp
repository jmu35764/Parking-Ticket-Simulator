// Parking Ticket Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include "Parked_Car.h"
#include "ParkingMeter.h"
#include "Ticket.h"
#include "Officer.h"

using namespace std;

int main()
{
    //****** SCENARIO 1: LEGAL PARKING ******//

    cout << "LEGAL PARKING" << endl;
    
    ParkedCar Car1("Ford", "Fusion", "Black", "123ACD", 50);
    Car1.Print();

    ParkingMeter m1(60);

    Officer P1("Jones", "1234", Car1, m1);
    P1.Inspect();

    //****** SCENARIO 2: ILLEGAL PARKING: UNDER 1 HOUR ******//

    cout << endl << "ILLEGAL PARKING: UNDER 1 HOUR" << endl;

    ParkedCar Illeg("Mercury", "Sabel", "White", "456DEF", 70);
    ParkingMeter m2(60);
    
    Officer P2("Max Payne", "2244", Illeg, m2);
    P2.Inspect();


    //****** SCENARIO 3: ILLEGAL PARKING: OVER 1 HOUR ******//

    cout << endl << "ILLEGAL PARKING: OVER 1 HOUR" << endl;

    ParkedCar Illeg2("Honda", "Civic", "Red", "789GHI", 180);
    ParkingMeter m3(60);

    Officer P3("Max Payne", "2244", Illeg2, m3);
    P3.Inspect();

    cout << ceil(1.3) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
