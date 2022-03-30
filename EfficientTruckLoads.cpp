#include "EfficientTruckLoads.h"

#include <array>



EfficientTruckLoads::EfficientTruckLoads() {
 
}

int TruckLoads::numTrucks(int numCrates, int loadSize) {
        if (numCrates <= loadSize) { 
		lookup.push_back(1);
		return lookup.at(1); 
	}

        if (numCrates % 2 == 0)
                return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
        return numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2 + 1,loadSize);

}

