#include "Alimentacao.hpp"

void Alimentacao::imprimirRelatorio() {
  std::cout <<"\nAnimal: " << this->_animal->getNome()<< std::endl
  << "  Cuidador: " << this->_cuidador->getNome() << std::endl
  << "  Descricao: " << this->_descricao << std::endl;
}

void Alimentacao::setDescricao(std::string descricao) {
  this->_descricao = descricao;
}

double Alimentacao::totalConsumido() {
  return this->_porcaoComida * this->_quantidadePorcao;
}