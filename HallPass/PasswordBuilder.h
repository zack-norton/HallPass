#pragma once

#include <iostream>

class PasswordBuilder
{
private:
	short length;
	bool includeNumbers;
	bool includeUppercase;
	bool includeLowercase;
	bool includeSymbols;

public:
	PasswordBuilder();
	PasswordBuilder(const PasswordBuilder& pb2);
	~PasswordBuilder();

	void SetFlags();
};

