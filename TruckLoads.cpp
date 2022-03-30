#include "TruckLoads.h"

TruckLoads::TruckLoads() {
	nTrucks = 0;
}

int TruckLoads::numTrucks(int numCrates, int loadSize) {
	if (numCrates <= loadSize) { return 1; }
	
	if (numCrates % 2 == 0)
		return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
	return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2 + 1,loadSize);
 
}
