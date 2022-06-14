#include <iostream>

#include "./Ursidae.hpp"
#include "../Animal/Animal.hpp"

Ursidae::Ursidae() {
    setDefaultInfo();
}

Ursidae::Ursidae(const std::string name) : Animal(name) {
    setDefaultInfo();
}

Ursidae::Ursidae(const std::string name, const unsigned int age) : Animal(name, age) {
    setDefaultInfo();
}

Ursidae::Ursidae(const std::string name, const unsigned int age, const double amountFishPerDayInKg) : Animal(name, age) {
    setDefaultInfo();
    setAmountFishPerDayInKg(amountFishPerDayInKg);
}

Ursidae::Ursidae(const std::string name, const unsigned int age, const std::string species) : Animal(name, age, species) {
    setDefaultInfo();
}

Ursidae::Ursidae(const std::string name, const unsigned int age, const std::string species, const double amountFishPerDayInKg) : Animal(name, age, species) {
    setDefaultInfo();
    setAmountFishPerDayInKg(amountFishPerDayInKg);
}

Ursidae::~Ursidae() {}

void Ursidae::setAmountFishPerDayInKg(const double amountFishPerDayInKg) {
    this->amountFishPerDayInKg = amountFishPerDayInKg;
    return;
}

double Ursidae::getAmountFishPerDayInKg() const {
    return amountFishPerDayInKg;
}

void Ursidae::setDefaultInfo() {
    setFamily("Ursidae");
    deit.setPortionsSize(PORTIONS_SIZE);
}
