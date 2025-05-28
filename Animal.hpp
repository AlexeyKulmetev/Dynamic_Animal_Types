#pragma once


class Animal {
public:
	virtual ~Animal() = 0;

	virtual void makeSound() const = 0;
};

Animal::~Animal() {}