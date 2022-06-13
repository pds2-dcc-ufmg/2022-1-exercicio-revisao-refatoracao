#include <iostream>

#include "./Herpestidae.hpp"

double Herpestidae::consumedPortionsInKg(const unsigned int amountConsumedPortions) {
    return PORTIONS_SIZE * amountConsumedPortions;
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << species << std::endl;

    return;
}
