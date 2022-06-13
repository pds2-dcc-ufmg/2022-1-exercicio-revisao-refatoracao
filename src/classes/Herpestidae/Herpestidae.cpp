#include <iostream>

#include "./Herpestidae.hpp"

void Herpestidae::print() const {
    Animal::print();
    std::cout << "  Especie: " << getSpecies() << std::endl;

    return;
}

double Herpestidae::consumedPortionsInKg(const unsigned int amountConsumedPortions) {
    return PORTIONS_SIZE * amountConsumedPortions;
}

void Herpestidae::setSpecies(const std::string species) {
    this->species = species;
    return;
}

std::string Herpestidae::getSpecies() const {
    return species;
}
