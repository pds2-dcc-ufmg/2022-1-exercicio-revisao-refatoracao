#include "Animal.hpp"

#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

class Herpestidae: public Animal {
  private:
    std::string _especie;
  
  public:
    Herpestidae(std::string nome, std::string especie, int idade): Animal(nome, "Herpestidae", idade), _especie(especie) {}
    ~Herpestidae() {}
    virtual void imprimirInformacoes() override;
};

#endif