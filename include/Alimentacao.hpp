#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao{
    public:
     int porcao;
     string descricao;
     Cuidador cuid;
     Animal animal;

     void print();
};

#endif