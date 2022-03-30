#ifndef EFFICIENTTRUCKLOADS
#define EFFICIENTTRUCKLOADS

#include <array>

class EfficientTruckLoads {
        public:
                EfficientTruckLoads();
                int numTrucks(int numCrates, int loadSize);
        private:
                std::array<int> lookup;
};




#endif 

