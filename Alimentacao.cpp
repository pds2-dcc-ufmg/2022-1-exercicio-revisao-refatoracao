#include "Alimentacao.hpp"
#include <iostream>

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador* _cuidador, Animal* _animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuidador = _cuidador;
    this->animal = _animal;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

std::string Alimentacao::getDescricao(){
    return this->descricao;
}

void Alimentacao::print(){
    cout << "\nAnimal: " << animal->getNome() << endl 
    << "Idade: " << animal->getIdade() << endl
    << "Familia: " << animal->getFamilia() << endl
    << "Especie: " << animal->getEspecie() << endl
    << "Cuidador: " << cuidador->getNome() << endl
    << "Descrição: " << this->descricao << endl;
}