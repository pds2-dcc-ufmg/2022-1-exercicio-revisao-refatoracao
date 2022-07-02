#include "Animal/Animal.hpp"

void Animal::imprimir() {
    std::cout << "[Animal]" << std::endl;
    std::cout << " Nome: " << this->nome << std::endl;
    std::cout << " Idade: " << this->idade << std::endl;
    std::cout << " Familia: " << this->familia << std::endl;

    if (this->especie != "")
        std::cout << " Especie: " << this->especie << std::endl;
}

std::string Animal::getNome() {
    return this->nome;
}

std::string Animal::getFamilia() {
    return this->familia;
}

int Animal::getQuantidadePorcao() {
    return this->quantidadePorcao;
}
