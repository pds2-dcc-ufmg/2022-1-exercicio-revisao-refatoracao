#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

#include <iostream>
#include <iomanip>


class Ursidae : public Animal {
    
    private:
        double kgPeixePorDia;

    public:
        Ursidae(std::string _nome, int _idade, std::string _especie);
        Ursidae(std::string _nome, int _idade);

        void setKgPeixePorDia(double _kgPeixePorDia);
};

#endif

