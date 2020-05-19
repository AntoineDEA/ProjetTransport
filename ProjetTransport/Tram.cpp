#include "Tram.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Tram::Tram() : PublicTransport()
{

}

vector<Tram> MyTrams;

void Tram::addTram(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG, bool weekEndG, bool handicapEquipedG)
{
	Tram myTram;

	myTram.id = idG;
	myTram.departure = departureG;
	myTram.arrival = arrivalG;
	myTram.tramNumber = busNumberG;
	myTram.numberOfPlaces = numberOfPlacesG;
	myTram.weekEnd = weekEndG;
	myTram.handicapEquiped = handicapEquipedG;

	cout <<
		"\n Tram add : ID:" << myTram.id <<
		"| Departure :" << myTram.departure <<
		"| Arrival:" << myTram.arrival <<
		"| Tram Number :" << myTram.tramNumber <<
		"| Number of places : " << myTram.numberOfPlaces <<
		"| Working on WeekEnds :" << myTram.weekEnd <<
		"| Adapted for handicap :" << myTram.handicapEquiped << "\n";

	MyTrams.push_back(myTram);
}

void Tram::showTram()
{
	int vectorSize = MyTrams.size();
	Tram myTramTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myTramTemp = MyTrams[i];
		cout << "ID :" << myTramTemp.id ;
		cout << "| Departure :" << myTramTemp.departure ;
		cout << "| Arrival :" << myTramTemp.arrival ;
		cout << "| Tram number :" << myTramTemp.tramNumber;
		cout << "| Number of places :" << myTramTemp.numberOfPlaces;
		cout << "| Working on WeekEnds :" << myTramTemp.weekEnd ;
		cout << "| Adapted for handicap :" << myTramTemp.handicapEquiped << "\n";
	}
}

Tram Tram::findTram(int z)
{
	int vectorSize = MyTrams.size();
	Tram myTramTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myTramTemp = MyTrams[i];
		if (myTramTemp.id == z)
		{
			cout << "We find your transport here is the details:\n";
			cout << "ID :" << myTramTemp.id;
			cout << "| Departure :" << myTramTemp.departure;
			cout << "| Arrival :" << myTramTemp.arrival;
			cout << "| Tram number :" << myTramTemp.tramNumber;
			cout << "| Number of places :" << myTramTemp.numberOfPlaces;
			cout << "| Working on WeekEnds :" << myTramTemp.weekEnd;
			cout << "| Adapted for handicap :" << myTramTemp.handicapEquiped << "\n";
			return myTramTemp;
		}
	}
	cout << "This transport does not exist\n";
}
