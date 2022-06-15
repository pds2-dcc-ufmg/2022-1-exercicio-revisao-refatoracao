#include "./Dieta.hpp"

const unsigned int Dieta::DEFAULT_PORTION_SIZE = 1;

Dieta::Dieta(const unsigned int portionsSize) {
    setPortionsSize(portionsSize);
}

Dieta::~Dieta() {}

double Dieta::calcConsumedPortionsInKg(const unsigned int amountConsumedPortions) {
    return getPortionsSize() * amountConsumedPortions;
}

void Dieta::setPortionsSize(const unsigned int portionsSize) {
    this->portionsSize = portionsSize;
    return;
}

unsigned int Dieta::getPortionsSize() const {
    return portionsSize;
}
