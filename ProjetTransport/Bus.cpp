#include "Bus.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Bus::Bus() : PublicTransport()
{

}

vector<Bus> MyBusses;

void Bus::addBus(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG, bool weekEndG, bool handicapEquipedG)
{
	Bus myBus;

	myBus.id = idG;
	myBus.departure = departureG;
	myBus.arrival = arrivalG;
	myBus.busNumber = busNumberG;
	myBus.numberOfPlaces = numberOfPlacesG;
	myBus.weekEnd = weekEndG;
	myBus.handicapEquiped = handicapEquipedG;

	cout <<
		"\n Bus add : ID:" << myBus.id <<
		"| Departure :" << myBus.departure <<
		"| Arrival:" << myBus.arrival <<
		"| Bus Number :" << myBus.busNumber <<
		"| Number of places : " << myBus.numberOfPlaces <<
		"| Working on WeekEnds :" << myBus.weekEnd <<
		"| Adapted for handicap :" << myBus.handicapEquiped << "\n";

	MyBusses.push_back(myBus);
}


void Bus::showBus()
{
	int vectorSize = MyBusses.size();
	Bus myBusTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myBusTemp = MyBusses[i];
		cout << "| ID :" << myBusTemp.id ;
		cout << "| Departure :" << myBusTemp.departure;
		cout << "| Arrival :" << myBusTemp.arrival;
		cout << "| Bus number :" << myBusTemp.busNumber ;
		cout << "| Number of places :" << myBusTemp.numberOfPlaces;
		cout << "| Working on WeekEnds :" << myBusTemp.weekEnd ;
		cout << "| Adapted for handicap :" << myBusTemp.handicapEquiped << "\n";

	}
}

void Bus::deleteBus(int d)
{
	int vectorSize = MyBusses.size();
	Bus myBusTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myBusTemp = MyBusses[i];
		if (myBusTemp.id == d)
		{
			MyBusses.erase(MyBusses.begin() + i);
			return;
		}
	}
	cout << "This bus already doesnt exist\n";
}

Bus Bus::findBus(int z)
{
	int vectorSize = MyBusses.size();
	Bus myBusTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myBusTemp = MyBusses[i];
		if (myBusTemp.id == z)
		{
			cout << "We find your transport here is the details:\n";
			cout << "| ID :" << myBusTemp.id;
			cout << "| Departure :" << myBusTemp.departure;
			cout << "| Arrival :" << myBusTemp.arrival;
			cout << "| Bus number :" << myBusTemp.busNumber;
			cout << "| Number of places :" << myBusTemp.numberOfPlaces;
			cout << "| Working on WeekEnds :" << myBusTemp.weekEnd;
			cout << "| Adapted for handicap :" << myBusTemp.handicapEquiped << "\n";
			return myBusTemp;
		}
	}
	cout << "This transport does not exist\n";

}