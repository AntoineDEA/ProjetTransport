#include "Bus.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Bus::Bus() : PublicTransport() //inheritence from my Vehicle class
{

}

vector<Bus> MyBusses; //Creation of a vector to stack all of my objects

void Bus::addBus(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG, bool weekEndG, bool handicapEquipedG)
{
	Bus myBus; // Creation of a temporary object

	myBus.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	MyBusses.push_back(myBus); // once it's done i push this temporary object in mt vector list
}


void Bus::showBus()
{
	int vectorSize = MyBusses.size(); // getting the size of my vector to read all the objects in it 
	Bus myBusTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myBusTemp = MyBusses[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "| ID :" << myBusTemp.id ; //And I display it
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
	int vectorSize = MyBusses.size(); // getting the size of my vector to read all the objects in it 
	Bus myBusTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myBusTemp = MyBusses[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myBusTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyBusses.erase(MyBusses.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This bus already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Bus Bus::findBus(int z)
{
	int vectorSize = MyBusses.size(); // getting the size of my vector to read all the objects in it 
	Bus myBusTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myBusTemp = MyBusses[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myBusTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your transport here is the details:\n";
			cout << "| ID :" << myBusTemp.id;
			cout << "| Departure :" << myBusTemp.departure;
			cout << "| Arrival :" << myBusTemp.arrival;
			cout << "| Bus number :" << myBusTemp.busNumber;
			cout << "| Number of places :" << myBusTemp.numberOfPlaces;
			cout << "| Working on WeekEnds :" << myBusTemp.weekEnd;
			cout << "| Adapted for handicap :" << myBusTemp.handicapEquiped << "\n";
			return myBusTemp; //Then I return my object
		}
	}
	cout << "This transport does not exist\n"; //If I don't find my object it mean it doesnt exist

}