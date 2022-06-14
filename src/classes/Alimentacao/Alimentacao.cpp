#include <iostream>

#include "./Alimentacao.hpp"

Alimentacao::Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName) : food(food) {
    setResponsable(responsable);
    setAnimalName(animalName);
}

Alimentacao::Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName, const std::string description) : food(food) {
    setResponsable(responsable);
    setAnimalName(animalName);
    setDescription(description);
}

Alimentacao::~Alimentacao() {}

void Alimentacao::print() const {
    std::cout << "Animal: " << getAnimalName() << std::endl;
    std::cout << " Cuidador: " << getResponsable().getName() << std::endl;
    std::cout << " Descricao: " << getDescription() << std::endl << std::endl;
    return;
}

void Alimentacao::setResponsable(const Cuidador responsable) {
    this->responsable = responsable;
    return;
}

Cuidador Alimentacao::getResponsable() const {
    return responsable;
}

void Alimentacao::setFoodType(const std::string foodType) {
    food.setFoodType(foodType);
    return;
}

std::string Alimentacao::getFoodType() const {
    return food.getFoodType();
}

void Alimentacao::setAmount(const unsigned int amount) {
    food.setConsumedAmount(amount);
    return;
}

unsigned int Alimentacao::getAmount() const {
    return food.getConsumedAmount();
}

void Alimentacao::setDescription(const std::string description) {
    this->description = description;
    return;
}

std::string Alimentacao::getDescription() const {
    return description;
}

void Alimentacao::setAnimalName(const std::string animalName) {
    this->animalName = animalName;
    return;
}

std::string Alimentacao::getAnimalName() const {
    return animalName;
}
