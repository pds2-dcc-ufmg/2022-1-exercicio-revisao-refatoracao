#ifndef URSIDAE_HPP
#define URSIDAE_HPP
#define PEIXES_POR_PORCAO 5

#include "Animal.hpp"

class Ursidae : public Animal
{
public:
    void print();
    double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
    void setkgPeixe(double);
    double getkgPeixe();

private:
    double kgPeixePorDIA;
};

#endif
