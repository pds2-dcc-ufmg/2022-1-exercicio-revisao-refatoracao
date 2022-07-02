#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

using std::string;

class Ursidae : public Animal{

    public:
       static constexpr int peixesPorPorcao = 5;
    
    private:
        string especie;
        double kgPeixePorDia;
    
    public:
        Ursidae(string _nome, string _idade, string _especie, double _kgPeixePorDia);
        void print();
        double calcula_peixes_consumidos(int porcaoPeixes);

};

#endif

