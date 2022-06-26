#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;


class Herpestidae:public Animal{

public:
    Herpestidae(string familia, string nome, string idade, string especie);

    double kgConsumidosDeRacao(int porcoesConsumidas){
        double c = quantPORCAO*porcoesConsumidas;
        return c;
    };

    void print_herpestidae(){

        Animal::print_animal();

        cout << "  Especie: " << especie <<endl;

    };
};

#endif
