#include <iostream>

#include "./Ursidae.hpp"

void Ursidae::print() const {
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << getName() << std::endl
              << "  Idade: " << getAge() << std::endl
              << "  Família: Ursidae" << std::endl // TODO: Fix - setar familia e usar o get
              << "  Especie: " << getSpecies() << std::endl;
    return;
}

double Ursidae::consumedPortionsInKg(const unsigned int amountConsumedPortions){
    return PORTIONS_SIZE * amountConsumedPortions;
}

void Ursidae::setAmountFishPerDayInKg(const double amountFishPerDayInKg) {
    this->amountFishPerDayInKg = amountFishPerDayInKg;
    return;
}

double Ursidae::getAmountFishPerDayInKg() const {
    return amountFishPerDayInKg;
}
