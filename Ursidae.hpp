#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

const int URSIDAE_PEIXES_POR_PORCAO = 5;

class Ursidae {
    
    int idade;
    std::string nome;
    std::string especie;
    double kgPeixePorDia;
    
    public:
    
    Ursidae(int _idade, std::string _nome, std::string _especie, double _kgPeixePorDia);

    void print();

    static double calcula_peixes_consumidos(int porcaoPeixes);

};

#endif
