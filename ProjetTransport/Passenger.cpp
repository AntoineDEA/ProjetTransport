#include "Passenger.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Passenger::Passenger() : People()
{

}

vector<Passenger> MyPassengers;

void Passenger::addPassenger(int idG, short nameG, short surnameG, short mailG, int numberG, char genderG, int ageG, bool vehiculG, bool busG, bool metroG, bool tramG)
{                            
	Passenger myPassenger;

	myPassenger.id = idG;
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

	MyPassengers.push_back(myPassenger);
}

void Passenger::showPassenger()
{
	int vectorSize = MyPassengers.size();
	Passenger myPassengerTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myPassengerTemp = MyPassengers[i];
		cout << "ID :" << myPassengerTemp.id ;
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
	int vectorSize = MyPassengers.size();
	Passenger myPassengerTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myPassengerTemp = MyPassengers[i];
		if (myPassengerTemp.id == d)
		{
			MyPassengers.erase(MyPassengers.begin() + i);
			return;
		}
	}
	cout << "This passenger already doesnt exist\n";
}

Passenger Passenger::findPassenger(int z)
{
	int vectorSize = MyPassengers.size();
	Passenger myPassengerTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myPassengerTemp = MyPassengers[i];
		if (myPassengerTemp.id == z)
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
			return myPassengerTemp;
		}
	}
	cout << "This passenger does not exist\n";
}