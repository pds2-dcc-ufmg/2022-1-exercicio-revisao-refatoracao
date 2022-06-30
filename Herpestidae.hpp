#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

#define QUANTPORCAO = 1

class Herpestidae : public Animal {

    public:
    
        Animal::print();
        
        Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
        double kgDeRacao = QUANTPORCAO * porcoesConsumidas;
        return kgDeRacao;
    }
};

#endif
