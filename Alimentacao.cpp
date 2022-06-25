#include "Alimentacao.hpp"

#include <string>
#include <iostream>

using namespace std;

void Alimentacao::print(){
    cout << "Animal: "<< this->nomeAnimal << endl;
    cout << " Cuidador: "<< this->cuidador << endl;
    cout << " Descricao: " << this->descricao << endl << endl; 
    
}

Alimentacao::Alimentacao(int _porcao, string _comida, string _cuidador, string _animal, string _descricao){
    this->porcao=_porcao;
    this->comida=_comida;
    this->cuidador=_cuidador;
    this->nomeAnimal=_animal;
    this->descricao=_descricao;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

void Alimentacao::setPorcao(int _porcao){
    this->porcao = _porcao;
}

void Alimentacao::setComida(string _comida){
    this->comida = _comida;
}
