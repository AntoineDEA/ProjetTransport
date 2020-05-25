#include "Metro.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Metro::Metro() : PublicTransport()
{

}

vector<Metro> MyMetroes; //Creation of a vector to stack all of my objects

void Metro::addMetro(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG)
{
	Metro myMetro; // Creation of a temporary object

	myMetro.id = idG; // I assign my variables tooked from my parameters to my temporary object
	myMetro.departure = departureG;
	myMetro.arrival = arrivalG;
	myMetro.metroNumber = busNumberG;
	myMetro.numberOfPlaces = numberOfPlacesG;


	cout << 
		"Metro add : ID:" << myMetro.id <<
		"| Departure :" << myMetro.departure <<
		"| Arrival:" << myMetro.arrival <<
		"| Metro Number :" << myMetro.metroNumber <<
		"| Number of places : " << myMetro.numberOfPlaces << "\n";

	MyMetroes.push_back(myMetro); // once it's done i push this temporary object in mt vector list
}

void Metro::showMetro()
{
	int vectorSize = MyMetroes.size(); // getting the size of my vector to read all the objects in it 
	Metro myMetroTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myMetroTemp = MyMetroes[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "| ID :" << myMetroTemp.id ; //And I display it
		cout << "| Departure :" << myMetroTemp.departure ;
		cout << "| Arrival :" << myMetroTemp.arrival ;
		cout << "| Metro number :" << myMetroTemp.metroNumber ;
		cout << "| Number of places :" << myMetroTemp.numberOfPlaces << "\n";
	}
}

void Metro::deleteMetro(int d)
{
	int vectorSize = MyMetroes.size(); // getting the size of my vector to read all the objects in it 
	Metro myMetroTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myMetroTemp = MyMetroes[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myMetroTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyMetroes.erase(MyMetroes.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This metro already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Metro Metro::findMetro(int z)
{
	int vectorSize = MyMetroes.size(); // getting the size of my vector to read all the objects in it 
	Metro myMetroTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myMetroTemp = MyMetroes[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myMetroTemp.id == z)  //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your transport here is the details:\n";
			cout << "| ID :" << myMetroTemp.id;
			cout << "| Departure :" << myMetroTemp.departure;
			cout << "| Arrival :" << myMetroTemp.arrival;
			cout << "| Metro number :" << myMetroTemp.metroNumber;
			cout << "| Number of places :" << myMetroTemp.numberOfPlaces << "\n";
			return myMetroTemp; //Then I return my Object
		}
	}
	cout << "This transport does not exist\n"; //If I don't find my object it mean it doesnt exist
}

