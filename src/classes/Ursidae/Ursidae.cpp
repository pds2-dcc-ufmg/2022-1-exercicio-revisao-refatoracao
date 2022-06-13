#include <iostream>

#include "./Ursidae.hpp"

Ursidae::Ursidae() {
    setFamily("Ursidae");
}

Ursidae::~Ursidae() {}

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
