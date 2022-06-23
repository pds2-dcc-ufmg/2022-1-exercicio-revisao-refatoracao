#include "Alimentacao.hpp"

void Alimentacao::print(){
    cout << "Animal: ";
    cout << this->nome_animal << "\n";

    cout << "Cuidador: ";
    cout << this->cuidador.nome << "\n";   
}