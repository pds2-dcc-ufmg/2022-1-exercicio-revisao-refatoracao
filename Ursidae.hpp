#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;


class Ursidae : public Animal{
    
    private:
    double KgPeixesConsumidos;

    public:
    Ursidae(int _idade, string _familia, string _nome, string _especie, int _KgPeixesConsumidos);

    Ursidae();

    ~Ursidae();

    double peixesConsumidos(int quantPorcao);
};

#endif

