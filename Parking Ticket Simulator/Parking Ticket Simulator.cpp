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

    ParkedCar Illeg2("Honda", "Civic", "Red", "789GHI", 181);
    ParkingMeter m3(60);

    Officer P3("Max Payne", "2244", Illeg2, m3);
    P3.Inspect();


    //****** SCENARIO 4: MULTIPLE CARS ******//

    //ParkedCar Car2("Kia", "Rio", "Silver", "111AAA", 30);

    cout << endl << "MULTIPLE CARS TEST" << endl;

    ParkedCar Car_[4]; 
    Car_[0] = ParkedCar("Kia", "Rio", "Silver", "111AAA", 30);
    Car_[1] = ParkedCar("Ford", "Focus", "Blue", "222BBB", 60); 
    Car_[2] = ParkedCar("Hyundai", "Elantra", "Green", "333CCC", 130); 
    Car_[3] = ParkedCar("Toyota", "Camry", "Yellow", "444DDD", 245);

    ParkingMeter Meter[4];
    Meter[0] = ParkingMeter(60);
    Meter[1] = ParkingMeter(60);
    Meter[2] = ParkingMeter(60);
    Meter[3] = ParkingMeter(60);

    Officer Mult1("Adrian", "9876", Car_[0], Meter[0]);
    Mult1.Inspect();
    cout << endl;

    Officer Mult2("Adrian", "9876", Car_[1], Meter[1]);
    Mult2.Inspect();
    cout << endl;

    Officer Mult3("Adrian", "9876", Car_[2], Meter[2]);
    Mult3.Inspect();
    cout << endl;

    Officer Mult4("Adrian", "9876", Car_[3], Meter[3]);
    Mult4.Inspect();

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
