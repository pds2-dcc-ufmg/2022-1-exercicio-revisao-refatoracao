#include <iostream>

#include "./Alimentacao.hpp"

Alimentacao::Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName) : responsable(new Cuidador(responsable)), food(new Comida(food)) {
    setAnimalName(animalName);
}

Alimentacao::Alimentacao(const Cuidador responsable, const Comida food, const std::string animalName, const std::string description) : responsable(new Cuidador(responsable)), food(new Comida(food)) {
    setAnimalName(animalName);
    setDescription(description);
}

Alimentacao::~Alimentacao() {}

void Alimentacao::print() const {
    std::cout << "Animal: " << getAnimalName() << std::endl;
    std::cout << " Cuidador: " << getResponsable()->getName() << std::endl;
    std::cout << " Descricao: " << getDescription() << std::endl << std::endl;
    return;
}

void Alimentacao::setResponsable(const Cuidador responsable) {
    *this->responsable = responsable;
    return;
}

std::shared_ptr<Cuidador> Alimentacao::getResponsable() const {
    return responsable;
}

void Alimentacao::setFood(const Comida food) {
    *this->food = food;
    return;
}

std::shared_ptr<Comida> Alimentacao::getFood() const {
    return food;
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
