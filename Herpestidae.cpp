#include "Herpestidae.hpp"


Herpestidae::Herpestidae(std::string familia, std::string nome, uint idade, std::string especie) : 
    Animal(familia, nome, idade), especie(especie) {
        this->print();
}

void Herpestidae::print() {
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}