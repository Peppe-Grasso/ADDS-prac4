#include "Reverse.h"
#include "TruckLoads.h"
#include <string>
#include <iostream>

int main(void) {
	Reverse r;
	std::cout << r.reverseDigit(12345);
	std::cout << r.reverseString("hello") << std::endl;

	TruckLoads t;
	std::cout << t.numTrucks(14,3); 
	
}
