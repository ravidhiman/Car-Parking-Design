#ifndef _PARKINGSPOT_H

#define _PARKINGSPOT_H

#include"Vehicle.h"

class ParkingSpot
{
	Vehicle *v;
	VehicleSize spotSize;
	int spotNbr;
	Level *l;
public:
	ParkingSpot(Level *l, int n, VehicleSize sz) :l(l), spotNbr(n), spotSize(sz)
	{
		v = NULL;
	}
	bool isAvailable()
	{
		return v == NULL;
	}
	bool canVehicleFit(Vehicle *v)
	{
		return (v->getSize() == spotSize);
	}
	bool ParkVehicle(Vehicle *v);
	void removeVehicle();
};
#endif //_PARKINGSOT_H