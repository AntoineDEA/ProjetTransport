#ifndef DEF_PASSENGER
#define DEF_PASSENGER

#include <iostream>
#include <string>
#include <vector>
#include "People.h"
// The include of People.h is necessary for the inheritance

class Passenger : public People
// Means: create a Passenger class which inherits from the People class
{
public:

	Passenger();
	bool vehicul;
	bool bus;
	bool metro;
	bool tram;
	void addPassenger(int id, short name, short surname, short mail, int number, char gender, int age, bool vehicul, bool bus, bool metro, bool tram);
	void showPassenger();

private:

};

#endif


