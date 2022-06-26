#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include"Animal.hpp"

class Ursidae: public Animal {

public:
    string especie;
    double qtdePeixe; //quantidade de peixes consumidos diariamente em kg
    
    double peixesConsumidos(int porcaoPeixes); //calcula a quantidade de peixes consumidos pelo animal
    virtual void print() override;

};

#endif