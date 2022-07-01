#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

const int quantPorcaoU = 5;

class Ursidae : public Animal
{
private:
    std::string especie;

public:
    Ursidae(unsigned int _idade, std::string _familia, std::string _nome, std::string _especie);
    double calculoPeixesConsumidos(int porcaoPeixes);
    void setEspecie(std::string _especie);
    void print() override;
};

#endif
