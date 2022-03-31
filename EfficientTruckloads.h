#ifndef EFFICIENTTRUCKLOADS
#define EFFICIENTTRUCKLOADS

#include <map>

class EfficientTruckloads {
        public:
                EfficientTruckloads();
                int numTrucks(int numCrates, int loadSize);
        private:
                std::map<int,int> lookup;
		int numTrucksHelper(int numCrates, int loadSize);
};




#endif 

