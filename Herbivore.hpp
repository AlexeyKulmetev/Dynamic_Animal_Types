#pragma once
#include "Animal.hpp"

class Herbivore : public Animal {
public:
	virtual ~Herbivore() = 0;

	void givePlants(const int plantsAmount = 0) {
		eatenPlants += plantsAmount;
	}

	int getEatenPlants() const {
		return eatenPlants;
	}

private:
	int eatenPlants = 0;
};

Herbivore::~Herbivore() {};