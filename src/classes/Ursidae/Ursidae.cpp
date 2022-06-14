#include <iostream>

#include "./Ursidae.hpp"

Ursidae::Ursidae() {
    setFamily("Ursidae");
    deit.setPortionsSize(PORTIONS_SIZE);
}

Ursidae::~Ursidae() {}

void Ursidae::setAmountFishPerDayInKg(const double amountFishPerDayInKg) {
    this->amountFishPerDayInKg = amountFishPerDayInKg;
    return;
}

double Ursidae::getAmountFishPerDayInKg() const {
    return amountFishPerDayInKg;
}
