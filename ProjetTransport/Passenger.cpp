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
		"\n Passenger add :\n ID:" << myPassenger.id <<
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