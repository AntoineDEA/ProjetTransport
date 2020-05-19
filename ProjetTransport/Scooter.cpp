#include "Scooter.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Scooter::Scooter() : Vehicule()
{
	Vehicule();
	//this->marq = new char[strlen(marq) + 1];
	//strcpy_s(this->marq, sizeof(marq), marq);
	numberOfPlaces = 0;
}

vector<Scooter> myScooters;

void Scooter::addScooter(int idG, char matriculG, int yearG, int commissionG, char marqG, int numberG)
{
	Scooter myScooter;

	myScooter.id = idG;
	myScooter.matricul = matriculG;
	myScooter.yearLastTechnicalConsult = yearG;
	myScooter.commissioningYear = commissionG;
	myScooter.marq = marqG;
	myScooter.numberOfPlaces = numberG;

	cout <<
		"|\n Scooter add : ID:" << myScooter.id <<
		"| Matricul :" << myScooter.matricul <<
		"| Year Of the las technical consult:" << myScooter.yearLastTechnicalConsult <<
		"| Commissioning year :" << myScooter.commissioningYear <<
		"| Marq : " << myScooter.marq <<
		"| Number of places :" << myScooter.numberOfPlaces << "\n";

	myScooters.push_back(myScooter);

}

void Scooter::showScooter()
{
	int vectorSize = myScooters.size();
	Scooter myScooterTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myScooterTemp = myScooters[i];
		cout << "| ID :" << myScooterTemp.id ;
		cout << "| Matricul :" << myScooterTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myScooterTemp.yearLastTechnicalConsult;
		cout << "| Commissioning year :" << myScooterTemp.commissioningYear ;
		cout << "| Marq :" << myScooterTemp.marq ;
		cout << "| Number of places :" << myScooterTemp.numberOfPlaces << "\n";
	}
}

void Scooter::deleteScooter(int d)
{
	int vectorSize = myScooters.size();
	Scooter myScooterTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myScooterTemp = myScooters[i];
		if (myScooterTemp.id == d)
		{
			myScooters.erase(myScooters.begin() + i);
			return;
		}
	}
	cout << "This scooter already doesnt exist\n";
}

Scooter Scooter::findScooter(int z)
{
	int vectorSize = myScooters.size();
	Scooter myScooterTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myScooterTemp = myScooters[i];
		if (myScooterTemp.id == z)
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "| ID :" << myScooterTemp.id;
			cout << "| Matricul :" << myScooterTemp.matricul;
			cout << "| Year Of the last technical consult :" << myScooterTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myScooterTemp.commissioningYear;
			cout << "| Marq :" << myScooterTemp.marq;
			cout << "| Number of places :" << myScooterTemp.numberOfPlaces << "\n";
			return myScooterTemp;
		}
	}
	cout << "This vehicle does not exist\n";
}
