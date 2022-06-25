#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Ursidae : public Animal{
    private:
        std::string _especie;
        double _kgPeixePorDia;
        const int _PEIXESPORPORCAO = 5;

    public:

        Ursidae(std::string nome, unsigned idade, std::string especie, double kgPeixePorDia);
        Ursidae(std::string nome, unsigned idade);

        void print() const override;

        double calculaPeixesConsumidos(int porcaoPeixes) const;

        void adicionarConsumo(double kg) override;
};

#endif

