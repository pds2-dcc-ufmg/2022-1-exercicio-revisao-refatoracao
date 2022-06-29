#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

double quantPORCAO = 1;

class Herpestidae : public Animal
{

public:
    void print();
    void setEspecie(std::string);
    std::string getEspecie();
    void setkgRacao(double);
    double getkgRacao();

private:
    std::string species;
    double kgConsumidosDeRacao(int porcoesConsumidas);
};

#endif
