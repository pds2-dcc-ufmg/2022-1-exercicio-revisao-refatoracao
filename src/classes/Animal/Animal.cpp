#include <iostream>
#include <string>

#include "./Animal.hpp"
#include "../Dieta/Dieta.hpp"

Animal::Animal() : deit(getDeitType()) {}

Animal::Animal(const std::string name) : deit(getDeitType()) {
    setName(name);
}

Animal::Animal(const std::string name, const unsigned int age) : deit(getDeitType()) {
    setName(name);
    setAge(age);
}

Animal::Animal(const std::string name, const unsigned int age, const std::string species) : deit(getDeitType()) {
    setName(name);
    setAge(age);
    setSpecies(species);
}

Animal::~Animal() {}

std::shared_ptr<Dieta> Animal::getDeitType() const {
    return std::shared_ptr<Dieta>(new Dieta(Dieta::DEFAULT_PORTION_SIZE));
}

void Animal::print() const {
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << getName() << std::endl
              << "  Idade: " << getAge() << std::endl
              << "  Família: " << getFamily() << std::endl
              << "  Especie: " << getSpecies() << std::endl;
    return;
}

void Animal::setAge(const unsigned int age) {
    this->age = age;
    return;
}

unsigned int Animal::getAge() const {
    return age;
}

void Animal::setName(const std::string name) {
    this->name = name;
    return;
}

std::string Animal::getName() const {
    return name;
}

void Animal::setFamily(const std::string family) {
    this->family = family;
    return;
}

std::string Animal::getFamily() const {
    return family;
}

void Animal::setSpecies(const std::string species) {
    this->species = species;
    return;
}

std::string Animal::getSpecies() const {
    return species;
}

std::shared_ptr<Dieta> Animal::getDeit() const {
    return deit;
}
