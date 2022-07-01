#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Ursidae :public Animal {
    private:
        std::string especie; 
        double kgPeixesPorDia;
    public:
        Ursidae();
        Ursidae(std::string _nome, int _idade, std::string _especie, double _kgPeixesPorDia);
        virtual void print() override;
        double calcularPeixesConsumidos(int porcoesConsumidas);
};

#endif

