#include "EfficientTruckloads.h"

#include <map>



EfficientTruckloads::EfficientTruckloads() {
}


int EfficientTruckloads::numTrucks(int numCrates, int loadSize) {
        if (numCrates < 0 || loadSize < 0 ) {return -1;}    
	if (numCrates == 0) {return 0;}
	int value = numTrucksHelper(numCrates, loadSize);
	lookup.clear();
	return value;
}

int EfficientTruckloads::numTrucksHelper(int numCrates,int loadSize) {
	if (lookup.count(numCrates)) {return lookup.at(numCrates); }

        if (numCrates <= loadSize) { 
		lookup.insert(std::pair<int,int>(numCrates,1));
		return lookup.at(numCrates); 
	}

        if (numCrates % 2 == 0) {
		lookup.insert(std::pair<int,int>(numCrates,(numTrucksHelper(numCrates/2,loadSize)*2)));
                return lookup.at(numCrates);
	}
        
	lookup.insert(std::pair<int,int>(numCrates,(numTrucksHelper(numCrates/2,loadSize) + numTrucksHelper(numCrates/2 + 1,loadSize))));
	return lookup.at(numCrates);

}

