#include "Alimentacao.hpp"

Alimentacao :: Alimentacao(int porcao, string comida, string descricao, Cuidador* cuid, string nomeAnimal) {
    this->_porcao = porcao;
    this->_comida = comida;
    this->_descricao = descricao;
    this->_cuid = cuid;
    this->_nomeAnimal = nomeAnimal;
}

void Alimentacao :: print() {
    cout << "Animal: " << this->_nomeAnimal << endl;
    cout << " Cuidador: " << _cuid->getNome() << endl;
    cout << " Descricao: " << this->_descricao << endl << endl;
}

int Alimentacao :: getPorcao() {
    return this->_porcao;
}