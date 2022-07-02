#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal/Animal.hpp"

class Ursidae : public Animal {
    
  public:

    Ursidae();
    Ursidae(std::string nome, int idade);
    Ursidae(std::string nome, int idade, std::string especie);

    double calculaPeixesConsumidos(int porcaoPeixes);
    int getQ();
};

#endif
