#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae : public Animal{

    static const int kPEIXES_POR_PORCAO;

    private:

        double kgPeixePorDia;

    public:

        Ursidae(Animal& a);

        Ursidae(Animal& a, double kgPeixePorDia);

        double getkgPeixePorDia();
        double calculaPeixesConsumidos(int porcaoPeixes);

        void setkgPeixePorDia(double qtde);

};

#endif

