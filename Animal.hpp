#ifndef ANIMAL_H
#define ANIMAL_H

#include "Alimentacao.hpp"

#include <string>
#include <memory>

class Animal
{

protected:
  std::string _nome;
  std::string _idade;
  std::string _nomeFamilia;
  std::string _nomeEspecie;
  std::shared_ptr<Alimentacao> _alimentacao = nullptr;

protected:
  Animal(const std::string nome, const std::string idade,
         const std::string nomeFamilia);
  Animal(const std::string nome, const std::string idade,
         const std::string nomeFamilia, const std::string nomeEspecie);

public:
  virtual void setAlimentacao(const int porcoesConsumidas,
                              const std::string &cuidador,
                              const std::string &descricaoAlimentacao) = 0;
  virtual int getComidaConsumida() = 0;
  virtual void print();
};

#endif