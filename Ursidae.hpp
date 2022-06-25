#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal{

    public:
        int calculaPeixesConsumidos(int totalPorcoes, int peixesPorPorcao){
            int totalConsumido = peixesPorPorcao * totalPorcoes;
            return totalConsumido;
        }
};

#endif

