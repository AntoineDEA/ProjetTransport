#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule()
{
	this->matricul = new char[strlen(matricul) + 1];
	strcpy_s(this->matricul, sizeof(matricul), matricul);
	id = 0;
	yearLastTechnicalConsult = 0;
	commissioningYear=0;


}



