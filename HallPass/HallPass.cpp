#include "HallPass.h"

HallPass::HallPass() {
	std::cout << "Welcome to Hall Pass verison 1.0!" << std::endl;
}

HallPass::HallPass(const HallPass& hallPass2) {

}

HallPass::~HallPass() {

}

void HallPass::Run() {
	PasswordBuilder* builder = new PasswordBuilder();

	builder->SetFlags();
}