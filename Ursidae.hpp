#ifndef ursidae_HPP
#define ursidae_HPP

#define NUMEROPEIXES 5

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Ursidae :public Animal{
    protected:

    std::string especie;
    double quantidadePeixe;
    
    public:

    Ursidae();
    Ursidae(std::string _nome, std::string _idade, std::string _especie, double _quantidadePeixe);
    void print() override;
    double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif

