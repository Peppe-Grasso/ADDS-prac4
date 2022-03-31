#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <string>
#include <iostream>

int main(void) {
	Reverse r;
	std::cout << r.reverseDigit(12345);
	std::cout << r.reverseString("hello") << std::endl;

	Truckloads t;
	std::cout << t.numTrucks(14,3) << std::endl; 	
	std::cout << t.numTrucks(15,1) << std::endl; 
	std::cout << t.numTrucks(1024,5) << std::endl; 


	EfficientTruckloads e;
	std::cout << e.numTrucks(14,3) << std::endl; 	
	std::cout << e.numTrucks(15,1) << std::endl; 
	std::cout << e.numTrucks(1024,5) << std::endl; 
}
