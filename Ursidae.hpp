#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

int peixesPorPorcao = 5;

class Ursidae : public Animal {

    private:
        std::string especie;
        double kg_peixe_por_dia;
        int peixes_por_porcao;

    
    public:
        Ursidae(std::string _especie, double _kg_peixe_por_dia, int _idade, std::string _familia, std::string _nome);

        virtual void print() override;
        double peixes_consumidos(int porcaoPeixes);

};

#endif

