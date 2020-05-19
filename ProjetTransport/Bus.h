#ifndef DEF_BUS
#define DEF_BUS

#include <iostream>
#include <string>
#include <vector>
#include "PublicTransport.h"
// The include of PublicTransport.h is necessary for the inheritance

class Bus : public PublicTransport
// Means: create a Bus class which inherits from the PublicTransport class
{
public:

	Bus();
	int busNumber;
	int numberOfPlaces;
	bool weekEnd;
	bool handicapEquiped;
	void addBus(int id, short departure, short arrival, int busNumber, int numberOfPlaces, bool weekEnd, bool handicapEquiped);
	void showBus();
	void deleteBus(int d);
	Bus findBus(int z);

private:

};

#endif

