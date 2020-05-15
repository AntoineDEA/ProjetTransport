#ifndef DEF_SCOOTER
#define DEF_SCOOTER

#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.h"
// The include of Vehicule.h is necessary for the inheritance

class Scooter : Vehicule
{
// Means: create a Scooter class which inherits from the Vehicle class
	public:
		Scooter();
		void addScooter(int id, char* matricul, int year, int commission, char* marq, int number);
		void showScooter();

	private:
		char * marq;
		int numberOfPlaces;
};

#endif

