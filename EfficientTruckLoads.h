#ifndef EFFICIENTTRUCKLOADS
#define EFFICIENTTRUCKLOADS

#include <map>

class EfficientTruckLoads {
        public:
                EfficientTruckLoads();
                int numTrucks(int numCrates, int loadSize);
        private:
                std::map<int,int> lookup;
};




#endif 

