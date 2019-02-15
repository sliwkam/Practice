/* This program uses classes and inheritance (methods and objects). Was created to handle the cost of flights */

#pragma hdrstop
#pragma argsused
#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class TFlight
{
   public:
   float numPass, numSeats;
   float price, percent(), payment();
};

class TFlightNew : public TFlight
{
	public:
	float costs, income();
};

/* The percentage of seats occupied on the plane */
float TFlight::percent()
{
	return  (numPass/numSeats)*100;
}

/* Revenue from the sale of tickets */
float TFlight::payment()
{
	return price*numPass;
}

/* Revenue from the flight */
float TFlightNew::income()
{
	return (price*numPass) - costs;
}

int _tmain(int argc, _TCHAR* argv[])
{
	TFlightNew plane;
	int profitability;
	cout << "Enter the number of the passengers: ";
	cin >> plane.numPass;
	cout << "Enter the number of seats on the plane: ";
	cin >> plane.numSeats;
	cout << "Enter price for ticket: ";
	cin >> plane.price;
	cout << "Enter the flight cost: ";
	cin >> plane.costs;
	cout << "Percent of occupied seats: " << plane.percent() <<"%" <<  endl;
	cout << "Money from ticket sales: " << plane.payment() << endl;
	cout << "Gains from the flight: " << plane.income() << endl;
	/* Flight profitability threshold */
	profitability = plane.costs/plane.price;
        cout << "The flight will be profitable above " << profitability <<" passengers.";
	getch();
	return 0;
}
