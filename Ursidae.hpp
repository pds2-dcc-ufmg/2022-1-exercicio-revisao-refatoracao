#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal
{
private:
  static const int pesoPorcao = 5;

public:
  Ursidae(std::string nome, std::string idade);
  Ursidae(std::string nome, std::string idade, std::string nomeEspecie);

  virtual void setAlimentacao(const int porcoesConsumidas,
                              const std::string &cuidador,
                              const std::string &descricaoAlimentacao) override;
  virtual int getComidaConsumida() override;
};

#endif