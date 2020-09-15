#include "PasswordBuilder.h"

PasswordBuilder::PasswordBuilder() {
	this->length = 0;
	this->includeNumbers = false;
	this->includeUppercase = false;
	this->includeLowercase = false;
	this->includeSymbols = false;
}

PasswordBuilder::PasswordBuilder(const PasswordBuilder& pb2) {
	this->length = pb2.length;
	this->includeNumbers = pb2.includeNumbers;
	this->includeUppercase = pb2.includeUppercase;
	this->includeLowercase = pb2.includeLowercase;
	this->includeSymbols = pb2.includeSymbols;
}

PasswordBuilder::~PasswordBuilder() {

}

void PasswordBuilder::SetFlags() {
	//init vars for creation flags
	//TODO: use bitmask instead of booleans
	
	char type;


	//TODO fix length read
	std::cout << "Please enter the length of the password to be generated:" << std::endl;
	std::cin >> length;

	do {
		std::cout << "Should the password include numbers? (y/n) ";
	} while ((std::cin >> type) && type != 'y' && type != 'n');
	if (type == 'y') {
		includeNumbers = true;
	}

	do {
		std::cout << "Should the password include uppercase letters? (y/n) ";
	} while ((std::cin >> type) && type != 'y' && type != 'n');
	if (type == 'y') {
		includeUppercase = true;
	}

	do {
		std::cout << "Should the password include lowercase letters? (y/n) ";
	} while ((std::cin >> type) && type != 'y' && type != 'n');
	if (type == 'y') {
		includeLowercase = true;
	}

	do {
		std::cout << "Should the password include symbols?(!@#$%&_) (y/n) ";
	} while ((std::cin >> type) && type != 'y' && type != 'n');
	if (type == 'y') {
		includeSymbols = true;
	}
}