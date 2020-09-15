#pragma once

#include <iostream>
#include "PasswordBuilder.h"

class HallPass {
private:


public:
	HallPass();
	HallPass(const HallPass& hallPass2);
	~HallPass();

	void Run();
};