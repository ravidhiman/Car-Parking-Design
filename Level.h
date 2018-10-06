#ifndef _LEVEL_H
#define _LEVEL_H

#include"ParkingSPot.h"

class Level
{
	int floor;
	vector<ParkingSpot*> spots;
	int availableSpots[3];
public:
	Level(int f, int nbrOfSpots);
	void spotFreed(VehicleSize size)
	{
		availableSpots[size]++;
	}
	bool ParkVehicle(Vehicle *v);
	void displayAvailableSlots();
};

#endif // !_LEVEL_H