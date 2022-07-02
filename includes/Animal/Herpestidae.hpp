#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal/Animal.hpp"

class Herpestidae : public Animal {

  public:
  
    Herpestidae();
    Herpestidae(std::string nome, int idade);
    Herpestidae(std::string nome, int idade, std::string especie);

    double quilosConsumidosRacao(int porcoesConsumidas);
  
};

#endif
