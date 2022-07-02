#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, std::string idade) : Ursidae::Ursidae(nome, idade, "") {}

Ursidae::Ursidae(std::string nome, std::string idade,
                 std::string nomeEspecie) : Animal(nome, idade, "Ursidae", nomeEspecie) {}

void Ursidae::setAlimentacao(const int porcoesConsumidas,
                             const std::string &cuidador,
                             const std::string& descricaoAlimentacao)
{

  this->_alimentacao = std::make_shared<Alimentacao>(
      this->_nome,
      porcoesConsumidas,
      cuidador,
      descricaoAlimentacao);

  this->_alimentacao.get()->print();

  return;

}

int Ursidae::getComidaConsumida()
{

  int retorno = this->_alimentacao.get()->getComidaConsumida(this->pesoPorcao);
  return retorno;

}
