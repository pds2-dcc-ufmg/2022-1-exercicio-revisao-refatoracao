#ifndef URSIDADE_H
#define URSIDADE_H

#include <iostream>

int peixesPorPorcao = 5;

class Ursidae 
{
    public:
    int idade;
    std::string nome;
    std::string especie;
    double kgPeixePorDIA;

    //Imprime na tela informações sobre o animal da família ursidae
    void print() 
    {
        std::cout << "\n[Animal]" << std::endl;
        std::cout << "  Nome: " << nome << std::endl;
        std::cout << "  Idade: " << idade << std::endl;
        std::cout << "  Família: Ursidae" << std::endl;
        std::cout << "  Especie: " << especie << std::endl;
    }
    //Calcula os peixes consumidos
    double calculaPeixesConsumidos(int porcaoPeixes)
    {
        double x;
        return peixesPorPorcao * porcaoPeixes;
    }
};

#endif
