#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

// double quantPORCAO = 1;

class Herpestidae : public Animal
{
private:
  static const int pesoPorcao = 1;

public:
  Herpestidae(std::string nome, std::string idade);
  Herpestidae(std::string nome, std::string idade, std::string nomeEspecie);

  virtual void setAlimentacao(const int porcoesConsumidas,
                              const std::string &cuidador,
                              const std::string &descricaoAlimentacao) override;
  virtual int getComidaConsumida() override;
};

#endif