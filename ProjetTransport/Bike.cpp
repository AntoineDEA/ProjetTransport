#include "Bike.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Bike::Bike() : Vehicule() //inheritence from my Vehicle class
{
	Vehicule();
	numberOfPlaces = 0;
	size = 'M';

}

vector<Bike> myBikes; //Creation of a vector to stack all of my objects

void Bike::addBike(int idG, char matriculG, int yearG, int commissionG, int numberOfPlacesG, char sizeG)
{
	Bike myBike; // Creation of a temporary object

	myBike.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	myBikes.push_back(myBike); // once it's done i push this temporary object in mt vector list
}

void Bike::showBike()
{
	int vectorSize = myBikes.size(); // getting the size of my vector to read all the objects in it 
	Bike myBikeTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myBikeTemp = myBikes[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID :" << myBikeTemp.id ; //And I display it
		cout << "| Matricul :" << myBikeTemp.matricul ;
		cout << "| Year Of the last technical consult :" << myBikeTemp.yearLastTechnicalConsult ;
		cout << "| Commissioning year :" << myBikeTemp.commissioningYear ;
		cout << "| Number of places :" << myBikeTemp.numberOfPlaces;
		cout << "| Size :" << myBikeTemp.size << "\n" ;
	}
}

void Bike::deleteBike(int d)
{
	int vectorSize = myBikes.size(); // getting the size of my vector to read all the objects in it 
	Bike myBikeTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myBikeTemp = myBikes[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myBikeTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			myBikes.erase(myBikes.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This bike already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Bike Bike::findBike(int z)
{
	int vectorSize = myBikes.size(); // getting the size of my vector to read all the objects in it 
	Bike myBikeTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myBikeTemp = myBikes[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myBikeTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find your vehicle here is the details:\n";
			cout << "ID :" << myBikeTemp.id;
			cout << "| Matricul :" << myBikeTemp.matricul;
			cout << "| Year Of the last technical consult :" << myBikeTemp.yearLastTechnicalConsult;
			cout << "| Commissioning year :" << myBikeTemp.commissioningYear;
			cout << "| Number of places :" << myBikeTemp.numberOfPlaces;
			cout << "| Size :" << myBikeTemp.size << "\n";
			return myBikeTemp; //Then I return my object
		}
	}
	cout << "This vehicle does not exist\n"; //If I don't find my object it mean it dont exist
}