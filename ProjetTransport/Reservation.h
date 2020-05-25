#ifndef DEF_RESERVATION
#define DEF_RESERVATION

#include <iostream>
#include <string>
#include <vector>

class Reservation
{
public:

	Reservation();
	void addReservationBike(int id, int day, int month, int year, int idUser, int idVehicle);
	void addReservationCar(int id, int day, int month, int year, int idUser, int idVehicle);
	void addReservationScooter(int id, int day, int month, int year, int idUser, int idVehicle);
	void showReservationsBike();
	void showReservationsCar();
	void showReservationsScooter();
	bool userIsValid(int d);
	bool bikeIsValid(int id, int day, int month, int year);
	bool CarIsValid(int id, int day, int month, int year);
	bool ScooterIsValid(int id, int day, int month, int year);

protected:


private:

	int id;
	int day;
	int month;
	int year;
	int idUser;
	int idVehicle;

};

#endif