#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

class Ursidae : public Animal{
public:
    //double _kgPeixePorDia;
    Ursidae(std::string nome, std::string especie, int idade);
    void print() override;
};

#endif
