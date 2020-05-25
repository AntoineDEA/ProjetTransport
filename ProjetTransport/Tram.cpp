#include "Tram.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Tram::Tram() : PublicTransport() //inheritence from my PublicTransport class
{
}

vector<Tram> MyTrams; //Creation of a vector to stack all of my objects

void Tram::addTram(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG, bool weekEndG, bool handicapEquipedG)
{
	Tram myTram; // Creation of a temporary object

	myTram.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	MyTrams.push_back(myTram); // once it's done i push this temporary object in mt vector list
}

void Tram::showTram()
{
	int vectorSize = MyTrams.size(); // getting the size of my vector to read all the objects in it 
	Tram myTramTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myTramTemp = MyTrams[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID :" << myTramTemp.id ; //And I display it
		cout << "| Departure :" << myTramTemp.departure ;
		cout << "| Arrival :" << myTramTemp.arrival ;
		cout << "| Tram number :" << myTramTemp.tramNumber;
		cout << "| Number of places :" << myTramTemp.numberOfPlaces;
		cout << "| Working on WeekEnds :" << myTramTemp.weekEnd ;
		cout << "| Adapted for handicap :" << myTramTemp.handicapEquiped << "\n";
	}
}

void Tram::deleteTram(int d)
{
	int vectorSize = MyTrams.size(); // getting the size of my vector to read all the objects in it 
	Tram myTramTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myTramTemp = MyTrams[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myTramTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyTrams.erase(MyTrams.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This tram already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Tram Tram::findTram(int z)
{
	int vectorSize = MyTrams.size(); // getting the size of my vector to read all the objects in it 
	Tram myTramTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myTramTemp = MyTrams[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myTramTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your transport here is the details:\n";
			cout << "ID :" << myTramTemp.id;
			cout << "| Departure :" << myTramTemp.departure;
			cout << "| Arrival :" << myTramTemp.arrival;
			cout << "| Tram number :" << myTramTemp.tramNumber;
			cout << "| Number of places :" << myTramTemp.numberOfPlaces;
			cout << "| Working on WeekEnds :" << myTramTemp.weekEnd;
			cout << "| Adapted for handicap :" << myTramTemp.handicapEquiped << "\n";
			return myTramTemp; // And I return my object
		}
	}
	cout << "This transport does not exist\n"; //If I don't find my object it mean it doesnt exist
}
