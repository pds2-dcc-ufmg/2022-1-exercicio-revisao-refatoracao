#include "Alimentacao.hpp"
#include <iostream>

Alimentacao::Alimentacao(int _porcao, string _comida, string _descricao, Cuidador _cuidador, Animal _animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuidador = _cuidador;
    this->animal = _animal;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

string Alimentacao::getDescricao(){
    return this->descricao;
}

void Alimentacao::print(){
    cout << "Animal: " << animal.getNome() << endl 
    << "Idade: " << animal.getIdade() << endl
    << "Familia: " << animal.getFamilia() << endl
    << "Especie: " << animal.getEspecie() << endl
    << "Cuidador: " << cuidador.getNome() << endl
    << "Descrição: " << this->descricao << endl;
}