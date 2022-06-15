#include "./DietaUrsidae.hpp"

DietaUrsidae::DietaUrsidae(const unsigned int amountConsumedPortions) : Dieta(amountConsumedPortions) {}

DietaUrsidae::DietaUrsidae(const unsigned int amountConsumedPortions, const double amountFishPerDayInKg) : Dieta(amountConsumedPortions) {
    setAmountFishPerDayInKg(amountFishPerDayInKg);
}

DietaUrsidae::~DietaUrsidae() {}

void DietaUrsidae::setAmountFishPerDayInKg(const double amountFishPerDayInKg) {
    this->amountFishPerDayInKg = amountFishPerDayInKg;
    return;
}

double DietaUrsidae::getAmountFishPerDayInKg() const {
    return amountFishPerDayInKg;
}
