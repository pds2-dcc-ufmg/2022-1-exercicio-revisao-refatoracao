#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <string>

#include "Animal.hpp"

class Ursidae : public Animal{

    public:
        Ursidae(int _idade, std::string _nome, std::string _familia, std::string _especie);
        int calculaPeixesConsumidos(int totalPorcoes, int peixesPorPorcao);
};

#endif

