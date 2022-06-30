#include "Alimentacao.hpp"

void Alimentacao::print() {
    cout << "Animal: " << this->nomeAnimal << endl;
    cout << " Cuidador: " << this->cuid.nome << endl;
}