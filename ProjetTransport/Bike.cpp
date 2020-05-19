#include "Bike.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Bike::Bike() : Vehicule()
{
	Vehicule();
	numberOfPlaces = 0;
	size = 'M';

}

vector<Bike> myBikes;

void Bike::addBike(int idG, char matriculG, int yearG, int commissionG, int numberOfPlacesG, char sizeG)
{
	Bike myBike;

	myBike.id = idG;
	myBike.matricul = matriculG;
	myBike.yearLastTechnicalConsult = yearG;
	myBike.commissioningYear = commissionG;
	myBike.numberOfPlaces = numberOfPlacesG;
	myBike.size = sizeG;

	cout <<
		"\n Bike add : ID:" << myBike.id <<
		"| Matricul :" << myBike.matricul <<
		"| Year Of the las technical consult:" << myBike.yearLastTechnicalConsult <<
		"| Commissioning year :" << myBike.commissioningYear <<
		"| Number Of PLaces : " << myBike.numberOfPlaces <<
		"| Size :" << myBike.size << "\n";

	myBikes.push_back(myBike);
}

void Bike::showBike()
{
	int vectorSize = myBikes.size();
	Bike myBikeTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myBikeTemp = myBikes[i];
		cout << "ID :" << myBikeTemp.id ;
		cout << "| Matricul :" << myBikeTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myBikeTemp.yearLastTechnicalConsult ;
		cout << "| Commissioning year :" << myBikeTemp.commissioningYear ;
		cout << "| Number of places :" << myBikeTemp.numberOfPlaces;
		cout << "| Size :" << myBikeTemp.size << "\n" ;
	}
}

void Bike::deleteBike(int d)
{
	int vectorSize = myBikes.size();
	Bike myBikeTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myBikeTemp = myBikes[i];
		if (myBikeTemp.id == d)
		{
			myBikes.erase(myBikes.begin() + i);
			return;
		}
	}
	cout << "This bike already doesnt exist\n";
}

Bike Bike::findBike(int z)
{
	int vectorSize = myBikes.size();
	Bike myBikeTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myBikeTemp = myBikes[i];
		if (myBikeTemp.id == z)
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "ID :" << myBikeTemp.id;
			cout << "| Matricul :" << myBikeTemp.matricul;
			cout << "| Year Of the last technical consult :" << myBikeTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myBikeTemp.commissioningYear;
			cout << "| Number of places :" << myBikeTemp.numberOfPlaces;
			cout << "| Size :" << myBikeTemp.size << "\n";
			return myBikeTemp;
		}
	}
	cout << "This vehicle does not exist\n";
}