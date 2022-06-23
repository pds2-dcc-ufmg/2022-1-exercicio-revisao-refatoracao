#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
        string _familia = "Herpestidae";
        string _especie;
        int _kgDeRacaoPorDia;
        const int QUANT_PORCAO = 1;

    public:
        Herpestidae (int idade, string nome, string especie);
        void print() override;
        void kgConsumidosDeRacao(int porcoesConsumidas);
        int getRacaoConsumida();
};

#endif
