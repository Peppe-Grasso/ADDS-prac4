#include "Reverse.h"
#include <string>
#include <iostream>

int main(void) {
	Reverse r;
	std::cout << r.reverseDigit(12345);
	std::cout << r.reverseString("hello");
}
