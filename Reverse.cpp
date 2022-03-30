#include "Reverse.h"

Reverse::Reverse() {
	rDigit=0;
	rString="";
}

int Reverse::reverseDigit(int value) {
	if (value < 0) {return -1;}
	if (value == 0) {int result=rDigit; rDigit = 0; return result;}

	rDigit = rDigit*10 + (value % 10);
	value /= 10;

	return reverseDigit(value);		
}

std::string Reverse::reverseString(std::string letters) {
	if (letters == "") {std::string result=rString; rString = ""; return result;}
	
	rString.push_back(letters.back());
	letters.pop_back();
	
	return reverseString(letters);
}
