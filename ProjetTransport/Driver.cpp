#include "Driver.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Driver::Driver() : People()
{

}

vector<Driver> MyDrivers;

void Driver::addDriver(int idG, short nameG, short surnameG, short mailG, int numberG, char genderG, int ageG, bool busG, bool metroG, bool tramG, int yearServiceStartG)
{
	Driver myDriver;

	myDriver.id = idG;
	myDriver.name = nameG;
	myDriver.surname = surnameG;
	myDriver.mail = mailG;
	myDriver.number = numberG;
	myDriver.gender = genderG;
	myDriver.age = ageG;
	myDriver.bus = busG;
	myDriver.metro = metroG;
	myDriver.tram = tramG;
	myDriver.yearServiceStart = yearServiceStartG;

	cout <<
		"\n Driver add : ID:" << myDriver.id <<
		"| Name :" << myDriver.name <<
		"| Surname:" << myDriver.surname <<
		"| Mail :" << myDriver.mail <<
		"| Number : " << myDriver.number <<
		"| Gender :" << myDriver.gender <<
		"| Age :" << myDriver.age <<
		"| Bus abonnement :" << myDriver.bus <<
		"| Metro abonnement : " << myDriver.metro <<
		"| Tram abonnement :" << myDriver.tram << 
		"| Year of service start :" << myDriver.yearServiceStart <<
		"\n";

	MyDrivers.push_back(myDriver);
}

void Driver::showDriver()
{
	int vectorSize = MyDrivers.size();
	Driver myDriverTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myDriverTemp = MyDrivers[i];
		cout << "ID :" << myDriverTemp.id ;
		cout << "| Name :" << myDriverTemp.name ;
		cout << "| Surname :" << myDriverTemp.surname ;
		cout << "| Mail :" << myDriverTemp.mail ;
		cout << "| Number :" << myDriverTemp.number ;
		cout << "| Gender :" << myDriverTemp.gender ;
		cout << "| Age :" << myDriverTemp.age ;
		cout << "| Bus abonnement :" << myDriverTemp.bus;
		cout << "| Metro abonnement :" << myDriverTemp.metro ;
		cout << "| Tram abonnement :" << myDriverTemp.tram ;
		cout << "| Year of service start :" << myDriverTemp.yearServiceStart << "\n";
	}
}

void Driver::deleteDriver(int d)
{
	int vectorSize = MyDrivers.size();
	Driver myDriverTemp;
	for (int i = 1; i < vectorSize; i++)
	{
		myDriverTemp = MyDrivers[i];
		if (myDriverTemp.id == d)
		{
			MyDrivers.erase(MyDrivers.begin() + i);
			return;
		}
	}
	cout << "This driver already doesnt exist\n";
}

Driver Driver::findDriver(int z)
{
	int vectorSize = MyDrivers.size();
	Driver myDriverTemp;
	for (int i = 0; i < vectorSize; i++)
	{
		myDriverTemp = MyDrivers[i];
		if (myDriverTemp.id == z)
		{
			cout << "We find your driver here is the details:\n";
			cout << "ID :" << myDriverTemp.id;
			cout << "| Name :" << myDriverTemp.name;
			cout << "| Surname :" << myDriverTemp.surname;
			cout << "| Mail :" << myDriverTemp.mail;
			cout << "| Number :" << myDriverTemp.number;
			cout << "| Gender :" << myDriverTemp.gender;
			cout << "| Age :" << myDriverTemp.age;
			cout << "| Bus abonnement :" << myDriverTemp.bus;
			cout << "| Metro abonnement :" << myDriverTemp.metro;
			cout << "| Tram abonnement :" << myDriverTemp.tram;
			cout << "| Year of service start :" << myDriverTemp.yearServiceStart << "\n";
			return myDriverTemp;
		}
	}

	cout << "This driver does not exist\n";
}