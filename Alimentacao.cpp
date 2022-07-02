#include "Alimentacao.hpp"

#include <iostream>

Alimentacao::Alimentacao(const std::string &nomeAnimal,
                         const int &porcoesConsumidas,
                         const std::string &cuidador,
                         const std::string &descricao) : 
    _nomeAnimal(nomeAnimal),
    _porcoesConsumidas(porcoesConsumidas),
    _cuidador(cuidador),
    _descricao (descricao) {}

void Alimentacao::print()
{
  
  std::cout << "Animal: ";
  std::cout << this->_nomeAnimal << std::endl;

  std::cout << " Cuidador: ";
  std::cout << this->_cuidador << std::endl;

  std::cout << " Descricao: ";
  std::cout << this->_descricao << std::endl;
  std::cout << std::endl;

  return;

}

int Alimentacao::getComidaConsumida(int pesoPorcao)
{

  int quilosComida = this->_porcoesConsumidas * pesoPorcao;
  return quilosComida;

}