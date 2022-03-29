#ifndef REVERSE
#define REVERSE

#include <string>

class Reverse {
	public:
		int reverseDigit(int value);
		std::string reverseString(std::string letters);
		Reverse();
	private:
		int rDigit;
		std::string rString;	

};

#endif
