#ifndef HERPESTIDADE_H
#define HERPESTIDADE_H

#include "Animal.hpp"

using namespace std;


class Herpestidae : public Animal {
    private:
        const double _QUANTPORCAO = 1;
        string _especie;

    public:
        Herpestidae(string nome, int idade, string especie = "", Alimentacao* alimentacao = nullptr, Cuidador* cuidador = nullptr);
        
        void print_informacoes() override;
        double kgConsumidos(int porcoesConsumidas);
        void consumir(double kg);
};

#endif