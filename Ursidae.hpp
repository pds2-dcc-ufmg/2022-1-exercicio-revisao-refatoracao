#ifndef Ursidae_H
#define Ursidae_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
using namespace std;

class Ursidae: public Animal{

    
    public:

        int idade;
        string nome;
        string especie;
        double kgPeixePorDia;
        Ursidae(string _idade, string _nome, string _especie, double _kgPeixePorDia);
        Ursidae(string _idade, string _nome);
        double calcularPeixesConsumidos(int porcaoPeixes);
};

#endif

