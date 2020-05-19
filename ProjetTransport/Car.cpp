#include "Car.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Car::Car() : Vehicule()
{
	Vehicule();
	//this->marq = new char[strlen(marq) + 1];
	//strcpy_s(this->marq,sizeof(marq), marq);
	numberOfPlaces = 0;
}

vector<Car> MyCars;

void Car::addCar(int idG, char matriculG, int yearG, int commissionG, char marqG, int numberG)
{
	Car myCar;

	myCar.id = idG;
	myCar.matricul = matriculG;
	myCar.yearLastTechnicalConsult = yearG;
	myCar.commissioningYear = commissionG;
	myCar.marq = marqG;
	myCar.numberOfPlaces = numberG;

	cout <<
		"\n Car add : ID:" << myCar.id <<
		"| Matricul :" << myCar.matricul <<
		"| Year Of the las technical consult:"<< myCar.yearLastTechnicalConsult <<
		"| Commissioning year :" <<myCar.commissioningYear <<
		"| Marq : " << myCar.marq <<
		"| Number of places :" << myCar.numberOfPlaces <<"\n";

	MyCars.push_back(myCar);
	
}


void Car::showCar()
{
	int vectorSize = MyCars.size();
	Car myCarTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myCarTemp=MyCars[i];
		cout << "ID :" << myCarTemp.id ;
		cout << "| Matricul :" << myCarTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myCarTemp.yearLastTechnicalConsult;
		cout << "| Commissioning year :" << myCarTemp.commissioningYear ;
		cout << "| Marq :" << myCarTemp.marq ;
		cout << "| Number of places :" << myCarTemp.numberOfPlaces <<"\n"  ;
	}
}

Car Car::findCar(int z)
{
	int vectorSize = MyCars.size();
	Car myCarTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myCarTemp = MyCars[i];
		if (myCarTemp.id == z)
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "ID :" << myCarTemp.id;
			cout << "| Matricul :" << myCarTemp.matricul;
			cout << "| Year Of the last technical consult :" << myCarTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myCarTemp.commissioningYear;
			cout << "| Marq :" << myCarTemp.marq;
			cout << "| Number of places :" << myCarTemp.numberOfPlaces << "\n";
			return myCarTemp;
		}
	}
	cout << "This vehicle does not exist\n";
}

void Car::deleteCar(int d)
{
	int vectorSize = MyCars.size();
	Car myCarTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myCarTemp = MyCars[i];
		if (myCarTemp.id == d)
		{
			MyCars.erase(MyCars.begin() + i);
			return;
		}
	}
	cout << "This car already doesnt exist\n";
}

bool Car::carValid(int i)
{
	bool val = 0;
	int itterator = 0;
	int x = 0;
	int research = i;
	while (itterator < 1)
	{
		Car myCarTemp;
		myCarTemp = MyCars[x];
		if (myCarTemp.id == i)
		{
			itterator = 1;
			if (myCarTemp.yearLastTechnicalConsult > 2015)
			{
				val = 1;
			}
		}
		else
		{
			x++;
		}
	}
	if (val == 1)
	{
		cout << "This vehicle is valid\n";
	}
	if (val == 0)
	{
		cout << "This vehicle is not valid\n";
	}
	return val;
}
