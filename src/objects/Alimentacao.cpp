#include "Alimentacao.hpp"

void Alimentacao::print() {
    std::cout << "Animal: ";
    cout << this->nomeAnimal << "\n";
    std::cout << " Cuidador: ";
    cout << this->cuid.NOME << "\n";
}