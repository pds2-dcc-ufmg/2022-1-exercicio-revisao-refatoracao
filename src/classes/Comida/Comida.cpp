#include <iostream>
#include <string>

#include "./Comida.hpp"

Comida::Comida(const std::string foodType) {
    setFoodType(foodType);
}

Comida::Comida(const std::string foodType, const double consumedAmount) {
    setFoodType(foodType);
    setConsumedAmount(consumedAmount);
}

Comida::~Comida() {}

void Comida::print() const {
    std::cout << "Tipo de comida: " << getFoodType() << std::endl
              << "Kg consumidos: " << getConsumedAmount() << std::endl;
    return;
}

void Comida::setFoodType(const std::string foodType) {
    this->foodType = foodType;
    return;
}

std::string Comida::getFoodType() const {
    return foodType;
}

void Comida::setConsumedAmount(const double consumedAmount) {
    this->consumedAmount = consumedAmount;
    return;
}

double Comida::getConsumedAmount() const {
    return consumedAmount;
}
