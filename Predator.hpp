#pragma once
#include "Animal.hpp"

class Predator : public Animal {
public:
	virtual ~Predator() = 0;

	void giveMeat(const int meatAmount = 0) {
		eatenMeat += meatAmount;
	}

	int getEatenMeat() const {
		return eatenMeat;
	}

private:
	int eatenMeat = 0;
};

Predator::~Predator() {}