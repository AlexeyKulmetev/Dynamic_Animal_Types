#pragma once
#include "Herbivore.hpp"
#include <iostream>

class Elephant : public Herbivore {
public:
	void makeSound() const override {
		std::cout << "BARROOOO";
	}
};