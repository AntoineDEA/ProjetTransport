#include "Car.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Car::Car() : Vehicule() //inheritence from my Vehicle class
{
	Vehicule();
	numberOfPlaces = 0;
}

vector<Car> MyCars; //Creation of a vector to stack all of my objects

void Car::addCar(int idG, char matriculG, int yearG, int commissionG, char marqG, int numberG)
{
	Car myCar; // Creation of a temporary object

	myCar.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	MyCars.push_back(myCar); // once it's done i push this temporary object in mt vector list
	
}


void Car::showCar()
{
	int vectorSize = MyCars.size(); // getting the size of my vector to read all the objects in it 
	Car myCarTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myCarTemp=MyCars[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID :" << myCarTemp.id ; //And I display it
		cout << "| Matricul :" << myCarTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myCarTemp.yearLastTechnicalConsult;
		cout << "| Commissioning year :" << myCarTemp.commissioningYear ;
		cout << "| Marq :" << myCarTemp.marq ;
		cout << "| Number of places :" << myCarTemp.numberOfPlaces <<"\n"  ;
	}
}

Car Car::findCar(int z)
{
	int vectorSize = MyCars.size(); // getting the size of my vector to read all the objects in it 
	Car myCarTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myCarTemp = MyCars[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myCarTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "ID :" << myCarTemp.id;
			cout << "| Matricul :" << myCarTemp.matricul;
			cout << "| Year Of the last technical consult :" << myCarTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myCarTemp.commissioningYear;
			cout << "| Marq :" << myCarTemp.marq;
			cout << "| Number of places :" << myCarTemp.numberOfPlaces << "\n";
			return myCarTemp; //Then I return my Object
		}
	}
	cout << "This vehicle does not exist\n"; //If I don't find my object it mean it doesnt exist
}

void Car::deleteCar(int d)
{
	int vectorSize = MyCars.size(); // getting the size of my vector to read all the objects in it 
	Car myCarTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myCarTemp = MyCars[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myCarTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyCars.erase(MyCars.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This car already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

bool Car::carValid(int i)
{
	bool val = 0; //This boolean will be what I am going to return at the end
	int itterator = 0;
	int x = 0;
	int research = i;
	while (itterator < 1) //This loop are going to step up until I find what I am looking for
	{
		Car myCarTemp; // Creation of a temporary object
		myCarTemp = MyCars[x]; //For each steps I assign to my temporary object all the values from the vector object
		if (myCarTemp.id == i) //This IF is when I find the object i'm looking for, by using is ID
		{
			itterator = 1; //This itterator swipping on 1 significate that my loop stop here
			if (myCarTemp.yearLastTechnicalConsult > 2015) //This if check if the last technical consult has been made after 2015
			{
				val = 1; //The boolean I want switch on 1
			}
		}
		else
		{
			x++; //Passing to the next object
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
	return val; //Returning the boolean I want
}

void Car::allCarValid()
{
	cout << "This is all the cars that need to pass a technical check\n";
	int vectorSize = MyCars.size(); // getting the size of my vector to read all the objects in it 
	Car myCarTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myCarTemp = MyCars[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myCarTemp.yearLastTechnicalConsult < 2015) //This if check if the last technical consult has been made after 2015
		{
			cout << "ID :" << myCarTemp.id;
			cout << "| Matricul :" << myCarTemp.matricul;
			cout << "| Year Of the last technical consult :" << myCarTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myCarTemp.commissioningYear;
			cout << "| Marq :" << myCarTemp.marq;
			cout << "| Number of places :" << myCarTemp.numberOfPlaces << "\n";
		}
		
	}
}
