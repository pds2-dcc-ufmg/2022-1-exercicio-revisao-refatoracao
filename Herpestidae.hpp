#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        std::string especie;
    public:
        Herpestidae();
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        double calcularRacaoConsumida(int porcoesConsumidas);
        void print();
};

#endif
