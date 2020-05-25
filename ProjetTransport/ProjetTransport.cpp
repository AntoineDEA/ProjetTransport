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
#include "Reservation.h"

using namespace std;


int main()
{
    //-----------------------------------------------------------------------------
    //This Part show the creation of each objects and show each list of objects
    //This Part need to be active to test all the others functions
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
    temp3.addPassenger(2, 'FPH', 'KOU', 'HPU', 12856995, 'H', 28, 1, 1, 1, 1);
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
    temp5.addBus(2, 'FGH', 'KDU', 966, 60, 1, 1);
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
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    Reservation temp8;


    //-----------------------------------------------------------------------------
    //This Part show the test of each find functions of each classes
    //-----------------------------------------------------------------------------

    /*
    cout << "\n\nFIND FUNCTION CHECK\n\n";
    cout << "Find a Car with ID=1 (exist):\n";
    temp.findCar(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Car with ID=2 (exist):\n";
    temp.findCar(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Car with ID=3 (dont exist):\n";
    temp.findCar(3);
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Bike with ID=1 (exist):\n";
    temp1.findBike(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Bike with ID=2 (exist):\n";
    temp1.findBike(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Bike with ID=3 (dont exist):\n";
    temp1.findBike(3);
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Scooter with ID=1 (exist):\n";
    temp2.findScooter(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Scooter with ID=2 (exist):\n";
    temp2.findScooter(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Scooter with ID=3 (dont exist):\n";
    temp2.findScooter(3);
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Passenger with ID=1 (exist):\n";
    temp3.findPassenger(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Passenger with ID=2 (exist):\n";
    temp3.findPassenger(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Passenger with ID=3 (dont exist):\n";
    temp3.findPassenger(3);
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Driver with ID=1 (exist):\n";
    temp4.findDriver(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Driver with ID=2 (exist):\n";
    temp4.findDriver(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Driver with ID=3 (dont exist):\n";
    temp4.findDriver(3);
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Bus with ID=1 (exist):\n";
    temp5.findBus(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Bus with ID=2 (exist):\n";
    temp5.findBus(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Bus with ID=3 (dont exist):\n";
    temp5.findBus(3);
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Metro with ID=1 (exist):\n";
    temp6.findMetro(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Metro with ID=2 (exist):\n";
    temp6.findMetro(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Metro with ID=3 (dont exist):\n";
    temp6.findMetro(3);
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Find a Tram with ID=1 (exist):\n";
    temp7.findTram(1);
    cout << "-----------------------------------------------\n";
    cout << "Find a Tram with ID=2 (exist):\n";
    temp7.findTram(2);
    cout << "-----------------------------------------------\n";
    cout << "Find a Tram with ID=3 (dont exist):\n";
    temp7.findTram(3);
    */

    //-----------------------------------------------------------------------------
    //This Part show the test of each delete functions of each classes
    //-----------------------------------------------------------------------------
    
    /*
    cout << "\n\nDELETE FUNCTION CHECK\n\n";
    cout << "CAR\n";
    cout << "Before\n";
    temp.showCar();
    cout << "-----------------------------------------------\n";
    cout << "Delete a Car with ID=2 (exist):\n";
    temp.deleteCar(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a Car with ID=3 (not exist):\n";
    temp.deleteCar(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp.showCar();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "BIKE\n";
    cout << "Before\n";
    temp1.showBike();
    cout << "-----------------------------------------------\n";
    cout << "Delete a Bike with ID=2 (exist):\n";
    temp1.deleteBike(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a Bike with ID=3 (not exist):\n";
    temp1.deleteBike(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp1.showBike();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "SCOOTER\n";
    cout << "Before\n";
    temp2.showScooter();
    cout << "-----------------------------------------------\n";
    cout << "Delete a Scooter with ID=2 (exist):\n";
    temp2.deleteScooter(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a Scooter with ID=3 (not exist):\n";
    temp2.deleteScooter(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp2.showScooter();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "PASSENGER\n";
    cout << "Before\n";
    temp3.showPassenger();
    cout << "-----------------------------------------------\n";
    cout << "Delete a Passenger with ID=2 (exist):\n";
    temp3.deletePassenger(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a Passenger with ID=3 (not exist):\n";
    temp3.deletePassenger(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp3.showPassenger();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "DRIVER\n";
    cout << "Before\n";
    temp4.showDriver();
    cout << "-----------------------------------------------\n";
    cout << "Delete a driver with ID=2 (exist):\n";
    temp4.deleteDriver(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a driver with ID=3 (not exist):\n";
    temp4.deleteDriver(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp4.showDriver();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "BUS\n";
    cout << "Before\n";
    temp5.showBus();
    cout << "-----------------------------------------------\n";
    cout << "Delete a bus with ID=2 (exist):\n";
    temp5.deleteBus(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a bus with ID=3 (not exist):\n";
    temp5.deleteBus(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp5.showBus();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "METRO\n";
    cout << "Before\n";
    temp6.showMetro();
    cout << "-----------------------------------------------\n";
    cout << "Delete a metro with ID=2 (exist):\n";
    temp6.deleteMetro(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a metro with ID=3 (not exist):\n";
    temp6.deleteMetro(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp6.showMetro();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "TRAM\n";
    cout << "Before\n";
    temp7.showTram();
    cout << "-----------------------------------------------\n";
    cout << "Delete a tram with ID=2 (exist):\n";
    temp7.deleteTram(2);
    cout << "-----------------------------------------------\n";
    cout << "Delete a tram with ID=3 (not exist):\n";
    temp7.deleteTram(2);
    cout << "-----------------------------------------------\n";
    cout << "After\n";
    temp7.showTram();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    */

    //-----------------------------------------------------------------------------
    //This Part show the test of the function validity last technical consult of a vehicle
    //-----------------------------------------------------------------------------

    /*
    cout << "\n\nTECHNICAL CONSULT CHECK \n\n";
    cout << "First test with a car having the last technical consult made in 2019\n";
    temp.carValid(1);
    cout << "-----------------------------------------------\n";
    cout << "Second test with a car having the last technical consult made in 2000\n";
    temp.carValid(2);
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    */
    
    //-----------------------------------------------------------------------------
    //This Part show all the vehicles that need to pass a technical consult
    //-----------------------------------------------------------------------------
    
    /*
    cout << "CAR WHO NEED TECHNICAL CHECK\n";
    cout << "-----------------------------------------------\n";
    temp.allCarValid();
    cout << "----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    */

    //-----------------------------------------------------------------------------
    //This Part show all the function related to the Reservation class for Bikes
    //-----------------------------------------------------------------------------
    
    /*
    cout << "RESERVATION CREATION\n";
    temp8.addReservationBike(2, 20, 2, 2019, 2, 2);
    cout << "-----------------------------------------------\n";
    cout << "SHOW RESERVATIONS\n";
    temp8.showReservationsBike();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a user who don't have the permission\n";
    temp8.addReservationBike(1, 19, 2, 2019, 1, 2);
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a bike already located this day\n";
    temp8.addReservationBike(2, 20, 2, 2019, 2, 2);
    */

    //-----------------------------------------------------------------------------
    //This Part show all the function related to the Reservation class for Cars
    //-----------------------------------------------------------------------------
    
    /*
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "RESERVATION CREATION\n";
    temp8.addReservationCar(2, 20, 2, 2019, 2, 2);
    cout << "-----------------------------------------------\n";
    cout << "SHOW RESERVATIONS\n";
    temp8.showReservationsCar();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a user who don't have the permission\n";
    temp8.addReservationCar(1, 19, 2, 2019, 1, 2);
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a bike already located this day\n";
    temp8.addReservationCar(2, 20, 2, 2019, 2, 2);
    */

    //-----------------------------------------------------------------------------
    //This Part show all the function related to the Reservation class for Scooters
    //-----------------------------------------------------------------------------

    /*
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "RESERVATION CREATION\n";
    temp8.addReservationScooter(2, 20, 2, 2019, 2, 2);
    cout << "-----------------------------------------------\n";
    cout << "SHOW RESERVATIONS\n";
    temp8.showReservationsScooter();
    cout << "-----------------------------------------------\n";
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a user who don't have the permission\n";
    temp8.addReservationScooter(1, 19, 2, 2019, 1, 2);
    cout << "-----------------------------------------------\n";
    cout << "Attempt to create a reservation with a bike already located this day\n";
    temp8.addReservationScooter(2, 20, 2, 2019, 2, 2);
    */
}   


