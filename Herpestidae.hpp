#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

public:
    string especie;

    double racaoConsumida(int porcaoConsumida); //retorna a quantidade de ração consumida em kg
    virtual void print() override;

};

#endif