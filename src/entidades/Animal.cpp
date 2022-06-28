#include "Animal.hpp"

#include <iostream>

Animal::Animal(std::string _idade, std::string _familia, std::string _nome)
    : idade(_idade), familia(_familia), nome(_nome) {
  this->comida = "";
  this->descricao = "";
  this->porcao = 0;
  this->nomeCuidador = "";
}

void Animal::setAlimentacaoInfo(std::string _comida, std::string _descricao,
                                std::string _nomeCuidador, int _porcao) {
  this->comida = _comida;
  this->descricao = _descricao;
  this->nomeCuidador = _nomeCuidador;
  this->porcao = _porcao;
}

int Animal::getPorcao() { return this->porcao; }

std::string Animal::getNome() { return this->nome; }
std::string Animal::getNomeCuidador() { return this->nomeCuidador; }
std::string Animal::getDescricao() { return this->descricao; }

void Animal::infoAnimal() {
  std::cout << "\n[Animal]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  Familia: " << familia << std::endl;
}
