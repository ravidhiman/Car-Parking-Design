#include"ParkingLot.h"

ParkingLot::ParkingLot()
{
	for (int i = 0;i < MAX_FLOORS;i++)
	{
		floors.push_back(new Level(i, 12));
	}
}
bool ParkingLot::ParkVehicle(Vehicle *v)
{
	for (int i = 0;i < MAX_FLOORS;i++)
	{
		if (floors[i]->ParkVehicle(v))
			return true;
	}
	return false;
}
void ParkingLot::displayFreeSlots()
{
	for (int i = 0;i < floors.size();i++)
	{
		floors[i]->displayAvailableSlots();
		cout << endl;
	}
}