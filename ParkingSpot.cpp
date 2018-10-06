#include"ParkingSpot.h"
#include"Level.h"

void ParkingSpot::removeVehicle()
{
	v = NULL;
	l->spotFreed(spotSize);
}
bool ParkingSpot::ParkVehicle(Vehicle *v)
{
	if (!canVehicleFit(v) || !isAvailable())
		return false;
	v = v;
	v->parkInSpot(this);
	return true;
}