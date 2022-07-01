#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

const double quantPorcaoH = 1;

class Herpestidae : public Animal
{
private:
    std::string especie;

public:
    Herpestidae(unsigned int _idade, std::string _familia, std::string _nome, std::string _especie);
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print() override;
};

#endif
