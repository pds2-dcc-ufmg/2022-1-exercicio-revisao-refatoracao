#include <iostream>

#include "./Ursidae.hpp"
#include "../Animal/Animal.hpp"
#include "../DietaUrsidae/DietaUrsidae.hpp"

const unsigned int Ursidae::PORTIONS_SIZE = 5;

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
    getUrsidaeDeit()->setAmountFishPerDayInKg(amountFishPerDayInKg);
}

Ursidae::Ursidae(const std::string name, const unsigned int age, const std::string species) : Animal(name, age, species) {
    setDefaultInfo();
}

Ursidae::Ursidae(const std::string name, const unsigned int age, const std::string species, const double amountFishPerDayInKg) : Animal(name, age, species) {
    setDefaultInfo();
    getUrsidaeDeit()->setAmountFishPerDayInKg(amountFishPerDayInKg);
}

Ursidae::~Ursidae() {}

std::shared_ptr<Dieta> Ursidae::getDeitType() const {
    return std::shared_ptr<DietaUrsidae>(new DietaUrsidae(PORTIONS_SIZE));
}

std::shared_ptr<DietaUrsidae> Ursidae::getUrsidaeDeit() const {
    return std::static_pointer_cast<DietaUrsidae>(getDeit());
}

void Ursidae::setDefaultInfo() {
    setFamily("Ursidae");
    getUrsidaeDeit()->setPortionsSize(PORTIONS_SIZE);
}
