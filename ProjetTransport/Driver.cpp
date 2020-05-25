#include "Driver.h"
#include <vector>
#include <string>
#include <wchar.h>

using namespace std;

Driver::Driver() : People()
{

}

vector<Driver> MyDrivers; //Creation of a vector to stack all of my objects

void Driver::addDriver(int idG, short nameG, short surnameG, short mailG, int numberG, char genderG, int ageG, bool busG, bool metroG, bool tramG, int yearServiceStartG)
{
	Driver myDriver; // Creation of a temporary object

	myDriver.id = idG; // I assign my variables tooked from my parameters to my temporary object
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

	MyDrivers.push_back(myDriver); // once it's done i push this temporary object in mt vector list
}

void Driver::showDriver()
{
	int vectorSize = MyDrivers.size(); // getting the size of my vector to read all the objects in it 
	Driver myDriverTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myDriverTemp = MyDrivers[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID :" << myDriverTemp.id ; //And I display it
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
	int vectorSize = MyDrivers.size(); // getting the size of my vector to read all the objects in it 
	Driver myDriverTemp; // Creation of a temporary object
	for (int i = 1; i < vectorSize; i++) //starting a loop on all objects
	{
		myDriverTemp = MyDrivers[i];  //For each steps I assign to my temporary object all the values from the vector object
		if (myDriverTemp.id == d) //This IF is when I find the object i'm looking for, by using is ID
		{
			MyDrivers.erase(MyDrivers.begin() + i); //Then with the erase function I can delete this object from my vector
			return;
		}
	}
	cout << "This driver already doesnt exist\n"; //If I don't find my object it mean it already doesnt exist
}

Driver Driver::findDriver(int z)
{
	int vectorSize = MyDrivers.size(); // getting the size of my vector to read all the objects in it 
	Driver myDriverTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myDriverTemp = MyDrivers[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myDriverTemp.id == z) //This IF is when I find the object i'm looking for, by using is ID
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
			return myDriverTemp; //Then I return my object
		}
	}

	cout << "This driver does not exist\n"; //If I don't find my object it mean it doesnt exist
}