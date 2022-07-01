#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include "Animal.hpp"

class Ursidae : public Animal{
    private:    
        static const double PEIXES_POR_PORCAO = 5.0;

        std::string especie;
        double kgPeixePorDia;

    public:
        Ursidae(std::string _nome, int _idade, std::string _especie, double _kgDePeixe);
        virtual void imprimirDadosAnimal() override;
        virtual double calculaConsumo(int porcao) override;

};

#endif