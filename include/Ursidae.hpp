#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"


class Ursidae : public Animal {
    private:
        static int PORCAO_PEIXE; // 5
        int _idade;
        std::string _nome;
        std::string _especie;
        double _kg_peixe_dia;
        
    public:

        Ursidae(std::string nome, int idade, std::string familia,std::string especie, double kg_peixe): 
        Animal(nome, idade, familia), _especie(especie), _kg_peixe_dia(kg_peixe) {}

        double peixesConsumidos(int porcaoPeixes);
        void print() override;
};

#endif

