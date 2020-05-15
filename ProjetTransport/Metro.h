#ifndef DEF_METRO
#define DEF_METRO

#include <iostream>
#include <string>
#include<vector>
#include "PublicTransport.h"
// The include of PublicTransport.h is necessary for the inheritance

class Metro : public PublicTransport
// Means: create a Bus class which inherits from the PublicTransport class
{
public:
	Metro();
	int metroNumber;
	int numberOfPlaces;
	void addMetro(int id, short departure, short arrival, int busNumber, int numberOfPlaces);
	void showMetro();

private:

};

#endif

