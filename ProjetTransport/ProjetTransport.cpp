#include <iostream>
#include "Vehicule.h"
#include "PublicTransport.h"
#include "People.h"
#include "Car.h"
#include "Bike.h"
#include"Scooter.h"
#include "Passenger.h"
#include "Driver.h"
#include "Bus.h"
#include "Metro.h"
#include "Tram.h"

using namespace std;


int main()
{
    //-----------------------------------------------------------------------------
    //This Part show the creation of each objects and show each list of objects
    //-----------------------------------------------------------------------------
    
    cout << "CAR CREATION";
    Car temp;
    temp.addCar(1, 'ljfd', 2019, 1998, 'AKZ', 60);
    temp.addCar(2, 'HFY', 2000, 1995 , 'F4K',50);
    cout << "-----------------------------------------------\n";
    cout << "SHOW CARS\n";
    temp.showCar();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "BIKE CREATION\n";
    Bike temp1;
    temp1.addBike(1, 'HCY', 2011, 1659, 50, 'M');
    temp1.addBike(2, 'LCY', 2011, 1659, 80, 'M');
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW BIKES\n";
    temp1.showBike();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "SCOOTER CREATION\n";
    Scooter temp2;
    temp2.addScooter(1, 'JMS', 2010, 1998, 'AMZ', 60);
    temp2.addScooter(2, 'MMS', 2010, 1698, 'PMZ', 60);
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW SCOOTERS \n";
    temp2.showScooter();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "PASSENGER CREATION\n";
    Passenger temp3;
    temp3.addPassenger(1, 'FGH', 'KDU', 'HDU', 12548695, 'H', 48, 0, 1, 1, 1);
    temp3.addPassenger(5, 'FPH', 'KOU', 'HPU', 12856995, 'H', 28, 1, 1, 1, 1);
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW PASSENGERSS \n";
    temp3.showPassenger();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "DRIVER CREATION\n";
    Driver temp4;
    temp4.addDriver(1, 'FGH', 'KDU', 'HDU', 12548695, 'H', 48, 1, 1, 1, 2016);
    temp4.addDriver(2, 'FGH', 'KDU', 'HMU', 16598695, 'F', 98, 1, 1, 1, 2776);
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW DRIVERS \n";
    temp4.showDriver();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "BUS CREATION\n";
    Bus temp5;
    temp5.addBus(1, 'FGH', 'KDU', 256, 60, 1, 0);
    temp5.addBus(11, 'FGH', 'KDU', 966, 60, 1, 1);
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW BUSSES \n";
    temp5.showBus();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "METRO CREATION\n";
    Metro temp6;
    temp6.addMetro(1, 'DFR', 'DRF', 15248, 60);
    temp6.addMetro(2, 'DPR', 'DRF', 12548, 69);
    cout << "\n-----------------------------------------------\n";
    cout << "SHOW METROES \n";
    temp6.showMetro();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "TRAM CREATION\n";
    Tram temp7;
    temp7.addTram(1, 'DRF', 'SZZ', 125, 90, 1, 0);
    temp7.addTram(2, 'DRF', 'SZZ', 105, 90, 1, 1);
    cout << "-----------------------------------------------\n";
    cout << "SHOW TRAMS \n";
    temp7.showTram();

    //------------------------------------------------------------------------------

    temp.carValid(1);
    temp.carValid(2);

    cout << "Fin";
}

