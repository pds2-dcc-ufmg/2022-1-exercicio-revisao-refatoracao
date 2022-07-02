#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        static const int kQUANT_PORCAO;

        double kgRacaoPorDia;

    public:

        Herpestidae(Animal& a);

        Herpestidae(Animal& a, double kgRacaoDia);

        double kgConsumidosDeRacao(int porcoesConsumidas);

        double getkgRacaoPorDia();

};

#endif
