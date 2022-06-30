#include "Alimentacao.hpp"

#include "iostream"

void Alimentacao::print() {

        std::cout << "Animal: ";
        std::cout << nomeAnimal << "\n";

        std::cout << " Cuidador: ";
        std::cout << cuid.nome << "\n";
}