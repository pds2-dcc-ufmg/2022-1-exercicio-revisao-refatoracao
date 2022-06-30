#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

double quantPorcao = 1;


class Herpestidae : public Animal {

    private:
        string species;

    public:
        double kgConsumidosDeRacao(int porcoesConsumidas);


        void print();
};

#endif
