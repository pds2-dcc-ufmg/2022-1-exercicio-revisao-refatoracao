#ifndef URSIDAE_HPP 
#define URSIDAE_HPP 

#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Ursidae: public Animal{
    
    private:
    string idade;
    string nome;
    string especie;
    string familia;
    double kgPeixePorDia;
    static int peixesPorPorcao;

    public:
    using Animal::Animal;
    void setEspecie(string _especie);
    void setKgPeixePorDia(double _kgPeixePorDia);
    void print();
    double calculaPeixesConsumidos(int porcaoPeixes);

};

#endif
