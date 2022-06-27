#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>

#include "Animal.hpp"

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae : public Animal {
    private:
        double kgPeixePorDIA;
        
    public:
        double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
            double x;
            return peixesPorPORCAO*porcaoPeixes;
        }
};

#endif

