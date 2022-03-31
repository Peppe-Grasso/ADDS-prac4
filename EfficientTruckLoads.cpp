#include "EfficientTruckloads.h"

#include <map>



EfficientTruckloads::EfficientTruckloads() {
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {

	if (lookup.count(numCrates)) {return lookup.at(numCrates); }

        if (numCrates <= loadSize) { 
		lookup.insert(std::pair<int,int>(numCrates,1));
		return lookup.at(numCrates); 
	}

        if (numCrates % 2 == 0) {
		lookup.insert(std::pair<int,int>(numCrates,(numTrucks(numCrates/2,loadSize)*2)));
                return lookup.at(numCrates);
	}
        
	lookup.insert(std::pair<int,int>(numCrates,(numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2 + 1,loadSize))));
	return lookup.at(numCrates);

}

