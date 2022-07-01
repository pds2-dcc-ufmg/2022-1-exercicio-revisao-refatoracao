#include "Alimentacao.hpp"
#include <iostream>

Alimentacao::Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador::Cuidador* _cuidador, Animal::Animal* _animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuidador = _cuidador;
    this->animal = _animal;
}

int Alimentacao::Alimentacao::getPorcao(){
    return this->porcao;
}

void Alimentacao::Alimentacao::print(){
    std::cout << "\nAnimal: " << animal->getNome() << std::endl 
    << "Cuidador: " << cuidador->getNome() << std::endl
    << "Descrição: " << this->descricao << std::endl;
}