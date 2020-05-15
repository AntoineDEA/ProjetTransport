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

void Bike::addBike(int idG, char* matriculG, int yearG, int commissionG, int numberOfPlacesG, char sizeG)
{
	Bike myBike;

	myBike.id = idG;
	myBike.matricul = matriculG;
	myBike.yearLastTechnicalConsult = yearG;
	myBike.commissioningYear = commissionG;
	myBike.numberOfPlaces = numberOfPlacesG;
	myBike.size = sizeG;

	cout <<
		"\n Bike add :\n ID:" << myBike.id <<
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