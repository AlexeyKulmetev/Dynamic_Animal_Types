#include "Herbivore.hpp"
#include "Predator.hpp"
#include "Lion.hpp"
#include "Elephant.hpp"
#include "Constants.hpp"
#include <vector>
#include <ctime>



void feed(Animal* animal) {
	if (!animal) {
		throw std::invalid_argument("Null animal");
	}
	if (Predator* predator = dynamic_cast<Predator*>(animal)) {
		predator->giveMeat(Constants::LION_MEAT_AMOUNT);
		std::cout << "Eaten meat = " << predator->getEatenMeat() << "\n";

	}
	else if (Herbivore* herbivore = dynamic_cast<Herbivore*>(animal)) {
		herbivore->givePlants(Constants::ELEPHANT_PLANTS_AMOUNT);
		std::cout << "Eaten plants = " << herbivore->getEatenPlants() << "\n";
	}
	else {
		throw std::runtime_error("Unknown animal type");
	}
	animal->makeSound();
}

void fillAnimalsVector(std::vector<Animal*>& animals) {
	srand(time(NULL));
	int random;
	for (int i = 0; i < Constants::ANIMAL_AMOUNT_IN_VECTOR; ++i) {
		random = rand() % Constants::ANIMAL_SPECIES_AMOUNT;
		if (random == Constants::LION_VALUE) {
			animals.push_back(new Lion);
			continue;
		}
		if (random == Constants::ELEPHANT_VALUE) {
			animals.push_back(new Elephant);
		}
	}
}


int main() {

	std::vector<Animal*> animals;
	fillAnimalsVector(animals);

	for (Animal* animal : animals) {
		feed(animal);
		std::cout << "\n";
	}

	for (Animal* animal : animals) {
		delete animal;
	}


	return 0;
}