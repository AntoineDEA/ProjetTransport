#include "Reservation.h"
#include <vector>
#include <string>
#include <wchar.h>
#include "Passenger.h"
#include "Bike.h"

using namespace std;

Reservation::Reservation()
{
	id = 0;
	day = 0;
	month = 0;
	year = 0;
	idUser = 0;
	idVehicle = 0;
}

vector<Reservation> MyReservationsBike; //Creation of a vector to stack all of my objects
vector<Reservation> MyReservationsCar; //Creation of a vector to stack all of my objects
vector<Reservation> MyReservationsScooter; //Creation of a vector to stack all of my objects

bool Reservation::userIsValid(int d)
{
	bool valid = 0; //This boolean will be what I am going to return at the end
	Passenger passTemp; // Creation of a temporary object
	passTemp = passTemp.findPassenger(d); //For each steps I assign to my temporary object all the values from the vector object
	if (passTemp.vehicul == 1)// This if is when my User is able to rent vehicles
	{
		valid = 1; //The boolean I want switch on 1
	}
	else
	{
		valid = 0;
	}
	return valid; //Returning the boolean I want
}

bool Reservation::bikeIsValid(int id, int day, int month, int year)
{
	bool bikeIsValid = 1; //This boolean will be what I am going to return at the end
	int vectorSize = MyReservationsBike.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++)//starting a loop on all objects
	{
		myReservationTemp = MyReservationsBike[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myReservationTemp.day == day) //This if is when I find an object who have the day than the day asked in parameters
		{
			if (myReservationTemp.month == month) //This if is when I find an object who have the month than the month asked in parameters
			{
				if (myReservationTemp.year == year) //This if is when I find an object who have the year than the year asked in parameters
				{
					bikeIsValid = 0;
				}
			}
		}
	}
	return bikeIsValid; //Returning the boolean I want
}

bool Reservation::ScooterIsValid(int id, int day, int month, int year)
{
	bool scooterIsValid = 1; //This boolean will be what I am going to return at the end
	int vectorSize = MyReservationsScooter.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myReservationTemp = MyReservationsScooter[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myReservationTemp.day == day) //This if is when I find an object who have the day than the day asked in parameters
		{
			if (myReservationTemp.month == month) //This if is when I find an object who have the month than the month asked in parameters
			{
				if (myReservationTemp.year == year) //This if is when I find an object who have the year than the year asked in parameters
				{
					scooterIsValid = 0;
				}
			}
		}
	}
	return scooterIsValid; //Returning the boolean I want
}

bool Reservation::CarIsValid(int id, int day, int month, int year)
{
	bool CarIsValid = 1; //This boolean will be what I am going to return at the end
	int vectorSize = MyReservationsCar.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myReservationTemp = MyReservationsCar[i]; //For each steps I assign to my temporary object all the values from the vector object
		if (myReservationTemp.day == day) //This if is when I find an object who have the day than the day asked in parameters
		{
			if (myReservationTemp.month == month) //This if is when I find an object who have the month than the month asked in parameters
			{
				if (myReservationTemp.year == year) //This if is when I find an object who have the year than the year asked in parameters
				{
					CarIsValid = 0;
				}
			}
		}
	}
	return CarIsValid; //Returning the boolean I want
}

void Reservation::addReservationBike(int idG, int dayG, int monthG, int yearG, int idUserG, int idVehicleG)
{
	Reservation myReservation; // Creation of a temporary object

	myReservation.id = idG; // I assign my variables tooked from my parameters to my temporary object
	myReservation.day = dayG;
	myReservation.month = monthG;
	myReservation.year = yearG;
	myReservation.idUser = idUserG;
	myReservation.idVehicle = idVehicleG;

	cout <<
		"\n Reservation Bike add : ID:" << myReservation.id <<
		"| Day :" << myReservation.day <<
		"| Month:" << myReservation.month <<
		"| Year :" << myReservation.year <<
		"| User ID : " << myReservation.idUser <<
		"| Vehicle ID :" << myReservation.idVehicle << "\n";

	bool validUser = myReservation.userIsValid(idUserG); //I'm checking if my user is authorized to rent a vehicle
	bool validBike = myReservation.bikeIsValid(idG, dayG, monthG, yearG); //I'm checking if the vehicle is available at this time

	if (validUser == 1) // cheking number one
	{
		if (validBike == 1) // checking number two
		{
			MyReservationsBike.push_back(myReservation); //Creation of my reservation and I put her in my list
			cout << "Bike Created\n";
		}
		else
		{
			cout << "Impossible to create the Reservation because the Bike is already located this day\n";
		}
	}
	else
	{
		cout << "Impossible to create the Reservation because the User doesnt have the permission\n";
	}


}

void Reservation::addReservationCar(int idG, int dayG, int monthG, int yearG, int idUserG, int idVehicleG)
{
	Reservation myReservation; // Creation of a temporary object

	myReservation.id = idG; // I assign my variables tooked from my parameters to my temporary object
	myReservation.day = dayG;
	myReservation.month = monthG;
	myReservation.year = yearG;
	myReservation.idUser = idUserG;
	myReservation.idVehicle = idVehicleG;

	cout <<
		"\n Reservation Car add : ID:" << myReservation.id <<
		"| Day :" << myReservation.day <<
		"| Month:" << myReservation.month <<
		"| Year :" << myReservation.year <<
		"| User ID : " << myReservation.idUser <<
		"| Vehicle ID :" << myReservation.idVehicle << "\n";

	bool validUser = myReservation.userIsValid(idUserG); //I'm checking if my user is authorized to rent a vehicle
	bool validCar = myReservation.CarIsValid(idG, dayG, monthG, yearG); //I'm checking if the vehicle is available at this time

	if (validUser == 1) // cheking number one
	{
		if (validCar == 1) // checking number two
		{
			MyReservationsCar.push_back(myReservation); //Creation of my reservation and I put her in my list
			cout << "Car Created\n";
		}
		else
		{
			cout << "Impossible to create the Reservation because the car is already located this day\n";
		}
	}
	else
	{
		cout << "Impossible to create the Reservation because the User doesnt have the permission\n";
	}


}

void Reservation::addReservationScooter(int idG, int dayG, int monthG, int yearG, int idUserG, int idVehicleG)
{
	Reservation myReservation; // Creation of a temporary object

	myReservation.id = idG; // I assign my variables tooked from my parameters to my temporary object
	myReservation.day = dayG;
	myReservation.month = monthG;
	myReservation.year = yearG;
	myReservation.idUser = idUserG;
	myReservation.idVehicle = idVehicleG;

	cout <<
		"\n Reservation Scooter add : ID:" << myReservation.id <<
		"| Day :" << myReservation.day <<
		"| Month:" << myReservation.month <<
		"| Year :" << myReservation.year <<
		"| User ID : " << myReservation.idUser <<
		"| Vehicle ID :" << myReservation.idVehicle << "\n";

	bool validUser = myReservation.userIsValid(idUserG); //I'm checking if my user is authorized to rent a vehicle
	bool validScooter = myReservation.ScooterIsValid(idG, dayG, monthG, yearG); //I'm checking if the vehicle is available at this time

	if (validUser == 1) // cheking number one
	{
		if (validScooter == 1) // cheking number two
		{
			MyReservationsScooter.push_back(myReservation); //Creation of my reservation and I put her in my list
			cout << "Scooter Created\n";
		}
		else
		{
			cout << "Impossible to create the Reservation because the scooter is already located this day\n";
		}
	}
	else
	{
		cout << "Impossible to create the Reservation because the User doesnt have the permission\n";
	}


}

void Reservation::showReservationsBike()
{
	int vectorSize = MyReservationsBike.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myReservationTemp = MyReservationsBike[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID Bike :" << myReservationTemp.id;
		cout << "| Day :" << myReservationTemp.day;
		cout << "| Month :" << myReservationTemp.month;
		cout << "| Year :" << myReservationTemp.year;
		cout << "| User ID :" << myReservationTemp.idUser;
		cout << "| Vehicle ID :" << myReservationTemp.idVehicle << "\n";;

	}
}

void Reservation::showReservationsCar()
{
	int vectorSize = MyReservationsCar.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myReservationTemp = MyReservationsCar[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID Car :" << myReservationTemp.id;
		cout << "| Day :" << myReservationTemp.day;
		cout << "| Month :" << myReservationTemp.month;
		cout << "| Year :" << myReservationTemp.year;
		cout << "| User ID :" << myReservationTemp.idUser;
		cout << "| Vehicle ID :" << myReservationTemp.idVehicle << "\n";;

	}
}

void Reservation::showReservationsScooter()
{
	int vectorSize = MyReservationsScooter.size(); // getting the size of my vector to read all the objects in it 
	Reservation myReservationTemp; // Creation of a temporary object
	for (int i = 0; i < vectorSize; i++) //starting a loop on all objects
	{
		myReservationTemp = MyReservationsScooter[i]; //For each steps I assign to my temporary object all the values from the vector object
		cout << "ID Scooter :" << myReservationTemp.id;
		cout << "| Day :" << myReservationTemp.day;
		cout << "| Month :" << myReservationTemp.month;
		cout << "| Year :" << myReservationTemp.year;
		cout << "| User ID :" << myReservationTemp.idUser;
		cout << "| Vehicle ID :" << myReservationTemp.idVehicle << "\n";;

	}
}