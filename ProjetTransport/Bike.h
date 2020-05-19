#ifndef DEF_BIKE
#define DEF_BIKE

#include <iostream>
#include <string>
#include "Vehicule.h"
// The include of Vehicule.h is necessary for the inheritance

class Bike : public Vehicule
// Means: create a Car class which inherits from the Vehicle class

{
	public:
		Bike();
		void showBike();
		Bike findBike(int z);
		void deleteBike(int d);
		void addBike(int idG, char matriculG, int yearG, int commissionG, int numberOfPlaces, char size);

	private:
		int numberOfPlaces;
		char size;
		
};

#endif

