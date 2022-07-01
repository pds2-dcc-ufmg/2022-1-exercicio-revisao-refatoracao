#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

double quantidadePorcao = 1;

class Herpestidae : public Animal 
{
    public:
    std::string especies;

    //Calcula a quantidade de ração consumida
    double kgConsumidosDeRacao(int porcoesConsumidas) 
    {
        double c = quantidadePorcao * porcoesConsumidas;
        return c;
    }
    //Imprime na tela a epécie do animal
    void print() 
    {
        Animal::print();
        std::cout << "  Especie: " << especies << std::endl;
    }
};

#endif
