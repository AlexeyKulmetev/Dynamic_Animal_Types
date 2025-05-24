#pragma once
#include "Animal.hpp"

class Predator : public Animal {
public:
	virtual ~Predator() = 0;
	void giveMeat(int meatAmount = 0) {
		eatenMeat += meatAmount;
	}

private:
	int eatenMeat = 0;
};

Predator::~Predator() {}