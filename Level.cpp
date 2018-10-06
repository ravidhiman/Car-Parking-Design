#include"Level.h"

Level::Level(int f, int nbrOfSpots)
{
	floor = f;
	availableSpots[0] = nbrOfSpots / 4;
	availableSpots[2] = nbrOfSpots / 4;
	availableSpots[1] = nbrOfSpots - availableSpots[0] - availableSpots[2];
	int i = 0;
	for (;i < availableSpots[2];i++)
		spots.push_back(new ParkingSpot(this, i, large));
	for (;i < availableSpots[0] + availableSpots[2];i++)
		spots.push_back(new ParkingSpot(this, i, small));
	for (;i < nbrOfSpots;i++)
		spots.push_back(new ParkingSpot(this, i, medium));
}

bool Level::ParkVehicle(Vehicle *v)
{
	for (int i = 0;i < spots.size();i++)
	{
		if (spots[i]->ParkVehicle(v))
		{
			availableSpots[v->getSize()]--;
			return true;
		}
	}
	return false;
}
void Level::displayAvailableSlots()
{
	cout << "On Floor :" << floor << endl;
	cout << "Available Slots for Bike = " << availableSpots[0] << endl;
	cout << "Available Slots for car  = " << availableSpots[1] << endl;
	cout << "Available Slots for Bus  = " << availableSpots[2] << endl;
}