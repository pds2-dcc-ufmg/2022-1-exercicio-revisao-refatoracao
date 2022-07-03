#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

const double HERPESTIDAE_QUANTIDADE_PORCAO = 1;

class Herpestidae : public Animal {
    std::string species;
    public:
    Herpestidae(int _idade, std::string _nome, std::string _species);
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print();
};

#endif