#ifndef DEF_TRAM
#define DEF_TRAM

#include <iostream>
#include <string>
#include<vector>
#include "PublicTransport.h"
// The include of PublicTransport.h is necessary for the inheritance

class Tram : public PublicTransport
// Means: create a Bus class which inherits from the PublicTransport class
{
public:
	Tram();
	int tramNumber;
	int numberOfPlaces;
	bool weekEnd;
	bool handicapEquiped;
	void addTram(int id, short departure, short arrival, int busNumber, int numberOfPlaces, bool weekEnd, bool handicapEquiped);
	void showTram();
	Tram findTram(int z);

private:

};

#endif

