#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
        string _familia = "Herpestidae";
        string _especie;
        const int QUANT_PORCAO = 1;

    public:
        Herpestidae (int idade, string nome, string especie);
        void print() override;
        double kgConsumidosDeRacao(int porcoesConsumidas);
};

#endif
