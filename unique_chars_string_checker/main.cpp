// Implement an algorithm to determine if a string has all unique characters.
// Assumptions: character set is in ASCII (8-bit)
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

bool isUniqueChars(string); // function prototype

// function main begins program execution
int main()
{
	string s;
	cout << "Enter a string: ";
	getline(cin, s);
	
	if(isUniqueChars(s)) {
		cout << "The string contains all unique characters"
			<< endl;
	}
	else {
		cout << "The string does not contains all unique characters"
			<< endl;
	}

	return 0; // indicate successful termination
} // end main

// checks whether the characters in a string are all unique
bool isUniqueChars(string str)
{
	// ASCII only has 256 possible characters, so if a string has more 
	// than 256 characters then it isn't unique
	if(str.length() > 256) {
		return false;
	}

	int charVal;
	bool charSet[256] = {0}; // character set initially set to 0

	// loop through the string setting the characters found in the string
	for(unsigned i = 0; i < str.length(); i++) {
		charVal = str[i];
		if(charSet[charVal]) { // character already found
			return false;
		}
		charSet[charVal] = true;
	}

	return true;
} // end function isUniqueChars
