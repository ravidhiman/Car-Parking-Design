#ifndef _VEHICLE_H

#define _VEHICLE_H

#include"common.h"
class ParkingSpot;
class Level;

class Vehicle
{
	ParkingSpot *spot;
	string nbrPlate;
	VehicleSize vs;
public:
	Vehicle(string nbr, VehicleSize size) :nbrPlate(nbr), vs(size) {}
	VehicleSize getSize() const
	{
		return vs;
	}
	void parkInSpot(ParkingSpot *ps)
	{
		spot = ps;
	}
	void removeVehicle();
};

#endif // !_VEHICLE_H