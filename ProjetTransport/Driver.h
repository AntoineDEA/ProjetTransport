#ifndef DEF_DRIVER
#define DEF_DRIVER

#include <iostream>
#include <string>
#include <vector>
#include "People.h"
// The include of People.h is necessary for the inheritance

class Driver : public People
// Means: create a Driver class which inherits from the People class
{
public:
	Driver();
	bool bus;
	bool metro;
	bool tram;
	int yearServiceStart;
	void addDriver(int id, short name, short surname, short mail, int number, char gender, int age, bool bus, bool metro, bool tram, int yearServiceStart);
	void showDriver();


private:

};

#endif

