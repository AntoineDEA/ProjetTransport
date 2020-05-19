#ifndef DEF_CAR
#define DEF_CAR

#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.h"
// The include of Vehicule.h is necessary for the inheritance

class Car : public Vehicule
// Means: create a Car class which inherits from the Vehicle class
{
	public:
		Car();
		void addCar(int id, char matricul, int year, int commission, char marq, int number);
		void showCar();
		Car findCar(int z);
		void deleteCar(int d);
		bool carValid(int i);

	protected:


	private:
		char marq;
		int numberOfPlaces;
		
};

#endif

