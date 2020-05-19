#include "Metro.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Metro::Metro() : PublicTransport()
{

}

vector<Metro> MyMetroes;

void Metro::addMetro(int idG, short departureG, short arrivalG, int busNumberG, int numberOfPlacesG)
{
	Metro myMetro;

	myMetro.id = idG;
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

	MyMetroes.push_back(myMetro);
}

void Metro::showMetro()
{
	int vectorSize = MyMetroes.size();
	Metro myMetroTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myMetroTemp = MyMetroes[i];
		cout << "| ID :" << myMetroTemp.id ;
		cout << "| Departure :" << myMetroTemp.departure ;
		cout << "| Arrival :" << myMetroTemp.arrival ;
		cout << "| Metro number :" << myMetroTemp.metroNumber ;
		cout << "| Number of places :" << myMetroTemp.numberOfPlaces << "\n";
	}
}

void Metro::deleteMetro(int d)
{
	int vectorSize = MyMetroes.size();
	Metro myMetroTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myMetroTemp = MyMetroes[i];
		if (myMetroTemp.id == d)
		{
			MyMetroes.erase(MyMetroes.begin() + i);
			return;
		}
	}
	cout << "This metro already doesnt exist\n";
}

Metro Metro::findMetro(int z)
{
	int vectorSize = MyMetroes.size();
	Metro myMetroTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myMetroTemp = MyMetroes[i];
		if (myMetroTemp.id == z)
		{
			cout << "We find your transport here is the details:\n";
			cout << "| ID :" << myMetroTemp.id;
			cout << "| Departure :" << myMetroTemp.departure;
			cout << "| Arrival :" << myMetroTemp.arrival;
			cout << "| Metro number :" << myMetroTemp.metroNumber;
			cout << "| Number of places :" << myMetroTemp.numberOfPlaces << "\n";
			return myMetroTemp;
		}
	}
	cout << "This transport does not exist\n";
}

