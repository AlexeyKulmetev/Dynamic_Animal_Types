#pragma once
#include "Predator.hpp"
#include <iostream>

class Lion : public Predator {
public:
	void makeSound() const override {
		std::cout << "ROOOOAAAAR";
	}
};
