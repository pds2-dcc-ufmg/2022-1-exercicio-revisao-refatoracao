#include "Animal.hpp"

#ifndef URSIDAE_H
#define URSIDAE_H

class Ursidae: public Animal {
  private:
    std::string _especie;

  public:
    Ursidae(std::string nome, std::string especie, int idade): Animal(nome, "Ursidae", idade), _especie(especie) {}
    ~Ursidae() {}
    virtual void imprimirInformacoes() override;
};

#endif

