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
