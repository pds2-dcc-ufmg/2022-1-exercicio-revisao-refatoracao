#ifndef URSIDAE_H
#define URSIDAE_H

#define NUMEROPEIXES 5

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Ursidae :public Animal{
    
    private:

    std::string especie;
    double quantidadePeixe;
    
    public:

    Ursidae();
    Ursidae(std::string _nome, std::string _idade, std::string _especie, double _quantidadePeixe);
    void print() override;
    double calculaPeixesConsumidos(int porcaoPeixes);
    ~Ursidae();
};

#endif

