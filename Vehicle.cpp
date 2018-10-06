#include"Vehicle.h"
#include"ParkingSpot.h"

void Vehicle::removeVehicle()
{
	spot->removeVehicle();
	spot = NULL;
}