#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string nome, std::string idade) : 
  Herpestidae::Herpestidae(nome, idade, "") {}

Herpestidae::Herpestidae(std::string nome, std::string idade,
                         std::string nomeEspecie) :
  Animal(nome, idade, "Herpestidae", nomeEspecie) {}

void Herpestidae::setAlimentacao(const int porcoesConsumidas,
                                 const std::string &cuidador,
                                 const std::string &descricaoAlimentacao)
{

  this->_alimentacao = std::make_shared<Alimentacao>(
      this->_nome,
      porcoesConsumidas,
      cuidador,
      descricaoAlimentacao);

  this->_alimentacao.get()->print();
      
  return;

}

int Herpestidae::getComidaConsumida()
{

  int retorno = this->_alimentacao.get()->getComidaConsumida(this->pesoPorcao);
  return retorno;
}
                                         