#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Ursidae : public Animal{

    private:
    
        int idade;
        std::string nome, especie;
        double kg_peixe_por_dia;

    public:

        Ursidae(std::string nome, int _idade, std::string especie, double kg_peixe_por_dia);
        void print() override;
    
};

#endif
