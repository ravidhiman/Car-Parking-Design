#include"ParkingLot.h"

int main()
{
	ParkingLot parkingLot;

	parkingLot.displayFreeSlots();

	Vehicle bike("PB", small);
	parkingLot.ParkVehicle(&bike);

	parkingLot.displayFreeSlots();

	Vehicle car("DL", medium);
	parkingLot.ParkVehicle(&car);
	
	bike.removeVehicle();

	parkingLot.displayFreeSlots();

	Vehicle bus("UP", large);
	parkingLot.ParkVehicle(&bus);

	parkingLot.displayFreeSlots();

	return 0;
}
