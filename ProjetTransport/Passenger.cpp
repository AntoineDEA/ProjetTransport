#include "Passenger.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Passenger::Passenger() : People()
{

}

vector<Passenger> MyPassengers; //Creation of a vector to stack all of my objects

void Passenger::addPassenger(int idG, short nameG, short surnameG, short mailG, int numberG, char genderG, int ageG, bool vehiculG, bool busG, bool metroG, bool tramG)
{                            
	Passenger myPassenger; // Creation of a temporary object

	myPassenger.id = idG; // I assign my variables tooked from my parameters to my temporary object
	myPassenger.name = nameG;
	myPassenger.surname = surnameG;
	myPassenger.mail = mailG;
	myPassenger.number = numberG;
	myPassenger.gender = genderG;
	myPassenger.age = ageG;
	myPassenger.vehicul = vehiculG;
	myPassenger.bus = busG;
	myPassenger.metro = metroG;
	myPassenger.tram = tramG;

	cout <<
		"\n Passenger add : ID:" << myPassenger.id <<
		"| Name :" << myPassenger.name <<
		"| Surname:" << myPassenger.surname <<
		"| Mail :" << myPassenger.mail <<
		"| Number : " << myPassenger.number <<
		"| Gender :" << myPassenger.gender <<
		"| Age :" << myPassenger.age <<
		"| Vehicul abonnement :" << myPassenger.vehicul <<
		"| Bus abonnement :" << myPassenger.bus <<
		"| Metro abonnement : " << myPassenger.metro <<
		"| Tram abonnement :" << myPassenger.tram << "\n";

	MyPassengers.push_back(myPassenger); // once it's done i push this temporary object in mt vector list
}

void Passenger::showPassenger()
{
	int vectorSize = MyPassengers.size(); // getting the size of my vector to read all the objects in it 
	Passenger myPassengerTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myPassengerTemp = MyPassengers[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID :" << myPassengerTemp.id ; //And I display it
		cout << "| Name :" << myPassengerTemp.name ;
		cout << "| Surname :" << myPassengerTemp.surname;
		cout << "| Mail :" << myPassengerTemp.mail ;
		cout << "| Number :" << myPassengerTemp.number ;
		cout << "| Gender :" << myPassengerTemp.gender ;
		cout << "| Age :" << myPassengerTemp.age ;
		cout << "| Vehicul abonnement :" << myPassengerTemp.vehicul;
		cout << "| Bus abonnement :" << myPassengerTemp.bus ;
		cout << "| Metro abonnement :" << myPassengerTemp.metro ;
		cout << "| Tram abonnement :" << myPassengerTemp.tram << "\n";
	}
}

void Passenger::deletePassenger(int d)
{
	int vectorSize = MyPassengers.size(); // getting the size of my vector to read all the objects in it 
	Passenger myPassengerTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myPassengerTemp = MyPassengers[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myPassengerTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyPassengers.erase(MyPassengers.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This passenger already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Passenger Passenger::findPassenger(int z)
{
	int vectorSize = MyPassengers.size(); // getting the size of my vector to read all the objects in it 
	Passenger myPassengerTemp;  // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myPassengerTemp = MyPassengers[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myPassengerTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
		{
			cout << "We find the passenger here is the details:\n";
			cout << "ID :" << myPassengerTemp.id;
			cout << "| Name :" << myPassengerTemp.name;
			cout << "| Surname :" << myPassengerTemp.surname;
			cout << "| Mail :" << myPassengerTemp.mail;
			cout << "| Number :" << myPassengerTemp.number;
			cout << "| Gender :" << myPassengerTemp.gender;
			cout << "| Age :" << myPassengerTemp.age;
			cout << "| Vehicul abonnement :" << myPassengerTemp.vehicul;
			cout << "| Bus abonnement :" << myPassengerTemp.bus;
			cout << "| Metro abonnement :" << myPassengerTemp.metro;
			cout << "| Tram abonnement :" << myPassengerTemp.tram << "\n";
			return myPassengerTemp; //Then I return my object
		}
	}
	cout << "This passenger does not exist\n"; //If I don't find my object it mean it doesnt exist
}