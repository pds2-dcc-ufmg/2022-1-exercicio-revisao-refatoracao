#include <iostream>

#include "./Herpestidae.hpp"
#include "../Animal/Animal.hpp"

Herpestidae::Herpestidae() {
    setDefaultInfo();
}

Herpestidae::Herpestidae(const std::string name) : Animal(name) {
    setDefaultInfo();
}

Herpestidae::Herpestidae(const std::string name, const unsigned int age) : Animal(name, age) {
    setDefaultInfo();
}

Herpestidae::Herpestidae(const std::string name, const unsigned int age, const std::string species) : Animal(name, age, species) {
    setDefaultInfo();
}

Herpestidae::~Herpestidae() {}

void Herpestidae::setDefaultInfo() {
    setFamily("Herpestidae");
    deit.setPortionsSize(PORTIONS_SIZE);
}
