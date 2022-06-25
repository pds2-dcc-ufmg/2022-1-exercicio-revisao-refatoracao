#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {

    public:
        double kgConsumidosDeRacao(int totalPorcoes, double kgPorPorcao) {
            double totalConsumido = (double) totalPorcoes * kgPorPorcao;
            return totalConsumido;
        }
};

#endif
