#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>

static const int PEIXESPORPORCAO = 5;

class Ursidae{
    public:
        uint idade;
        std::string nome;
        std::string especie;
        double quantidadePeixe;

        Ursidae(std::string nome, uint idade, std::string especie, double quantidadePeixe);
        void print();
        double calcularPeixesConsumidos(uint porcaoPeixes);
};
#endif //ursidae_HPP