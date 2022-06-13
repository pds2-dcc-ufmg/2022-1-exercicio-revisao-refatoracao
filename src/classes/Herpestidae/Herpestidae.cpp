#include <iostream>

#include "./Herpestidae.hpp"

Herpestidae::Herpestidae() {
    setFamily("Herpestidae");
}

Herpestidae::~Herpestidae() {}

double Herpestidae::consumedPortionsInKg(const unsigned int amountConsumedPortions) {
    return PORTIONS_SIZE * amountConsumedPortions;
}
