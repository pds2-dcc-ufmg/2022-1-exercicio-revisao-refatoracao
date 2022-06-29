#include <iostream>
#include <string>
#include "Alimentacao.hpp"

void Alimentacao::setComida(std::string _comida)
{
  this->comida = _comida;
}

std::string Alimentacao::getComida()
{
  return this->comida;
}
void Alimentacao::setDescricao(std::string _descricao)
{
  this->descricao = _descricao;
}

std::string Alimentacao::getDescricao()
{
  return this->descricao;
}
void Alimentacao::setNomeAnimal(std::string _nomeAnimal)
{
  this->nomeAnimal = _nomeAnimal;
}

std::string Alimentacao::getNomeAnimal()
{
  return this->nomeAnimal;
}

void Alimentacao::setCuidador(Cuidador _cuid)
{
  this->cuid = _cuid;
}

Cuidador Alimentacao::getCuidador()
{
  return this->cuid;
}
void Alimentacao::print()
{
  std::cout << "[Cuidador]" << std::endl;
  cuid.print();
  std::cout << "[Animal]" << std::endl;
  std::cout << "  " + nomeAnimal << std::endl;
  std::cout << "Porção: " << porcao << std::endl
            << "  Comida: " << comida << std::endl
            << "  Descrição: " << descricao << std::endl;
}