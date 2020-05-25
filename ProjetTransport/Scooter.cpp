#include "Scooter.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Scooter::Scooter() : Vehicule()
{
	Vehicule();
	numberOfPlaces = 0;
}

vector<Scooter> myScooters; //Creation of a vector to stack all of my objects

void Scooter::addScooter(int idG, char matriculG, int yearG, int commissionG, char marqG, int numberG)
{
	Scooter myScooter; // Creation of a temporary object

	myScooter.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	myScooters.push_back(myScooter); // once it's done i push this temporary object in mt vector list

}

void Scooter::showScooter()
{
	int vectorSize = myScooters.size(); // getting the size of my vector to read all the objects in it 
	Scooter myScooterTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myScooterTemp = myScooters[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "| ID :" << myScooterTemp.id ; //And I display it
		cout << "| Matricul :" << myScooterTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myScooterTemp.yearLastTechnicalConsult;
		cout << "| Commissioning year :" << myScooterTemp.commissioningYear ;
		cout << "| Marq :" << myScooterTemp.marq ;
		cout << "| Number of places :" << myScooterTemp.numberOfPlaces << "\n";
	}
}

void Scooter::deleteScooter(int d)
{
	int vectorSize = myScooters.size(); // getting the size of my vector to read all the objects in it 
	Scooter myScooterTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myScooterTemp = myScooters[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myScooterTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			myScooters.erase(myScooters.begin() + i); //Then with the erase function I can delete this object from my vector 
			return;
		}
	}
	cout << "This scooter already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Scooter Scooter::findScooter(int z)
{
	int vectorSize = myScooters.size(); // getting the size of my vector to read all the objects in it 
	Scooter myScooterTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myScooterTemp = myScooters[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myScooterTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "| ID :" << myScooterTemp.id;
			cout << "| Matricul :" << myScooterTemp.matricul;
			cout << "| Year Of the last technical consult :" << myScooterTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myScooterTemp.commissioningYear;
			cout << "| Marq :" << myScooterTemp.marq;
			cout << "| Number of places :" << myScooterTemp.numberOfPlaces << "\n";
			return myScooterTemp; //Then I return my object
		}
	}
	cout << "This vehicle does not exist\n"; //If I don't find my object it mean it doesnt exist
}
