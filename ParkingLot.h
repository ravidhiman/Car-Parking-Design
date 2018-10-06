#ifndef _PARKINGLOT_
#define _PARKINGLOT_

#include"Level.h"
class ParkingLot
{
	vector<Level*> floors;
	static const int MAX_FLOORS = 2;
public:
	ParkingLot();
	bool ParkVehicle(Vehicle *v);
	void displayFreeSlots();
};

#endif // !_PARKINGLOT_