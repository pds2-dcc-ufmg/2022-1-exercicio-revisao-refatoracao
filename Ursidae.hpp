#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae : public Animal
{
public:
    void print();
    double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes);
    void setEspecie(std::string);
    std::string getEspecie();
    void setkgPeixe(double);
    double getkgPeixe();

protected:
    std::string especie;
    double kgPeixePorDIA;
};

#endif
