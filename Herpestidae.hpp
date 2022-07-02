#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        double quantidadePorcao = 1;
    
    public:
        Herpestidae(Animal _animal);
        int calcularQtdAlimentos(int porcoesConsumidas); 
};

#endif