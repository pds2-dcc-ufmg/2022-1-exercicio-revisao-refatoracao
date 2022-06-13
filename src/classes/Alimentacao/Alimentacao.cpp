#include <iostream>

#include "./Alimentacao.hpp"

void Alimentacao::print() {
    std::cout << "Animal: ";
    std::cout << getAnimalName() << "\n";

    std::cout << " Cuidador: ";
    std::cout << getResponsable().getName() << "\n";

    return;
    // TODO: Deletar?
    //std::cout << " : ";
    //cout << ursidae;
}

// TODO: Deletar???
/*void print() {
    std::cout << "Cuidador: ";
    cout << cuida;

    std::cout << " Animal: ";
    cout << alimentado;
}*/

void Alimentacao::setResponsable(const Cuidador responsable) {
    this->responsable = responsable;
    return;
}

Cuidador Alimentacao::getResponsable() const {
    return responsable;
}

void Alimentacao::setFoodType(const std::string foodType) {
    this->foodType = foodType;
    return;
}

std::string Alimentacao::getFoodType() const {
    return foodType;
}

void Alimentacao::setAmount(const unsigned int amount) {
    this->amount = amount;
    return;
}

unsigned int Alimentacao::getAmount() const {
    return amount;
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
