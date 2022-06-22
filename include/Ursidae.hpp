#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "AnimalEspecie.hpp"

class Ursidae : public AnimalEspecie{
    private:
        static int PEIXESPORPORCAO;
        double kgPeixesPorDia;

    public:
        Ursidae(std::string _nome, std::string _idade, std::string _especie, double _kgPeixesPorDia);
        double kgComidaConsumida(int porcaoPeixes) const override;
};

#endif