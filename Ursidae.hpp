#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>

#include "Animal.hpp"

using namespace std;


class Ursidae : public Animal {
    private:
        double _consumoDePeixe;
        const int _PEIXESPORPORCAO = 5;
    public:
        Ursidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador);

        virtual void calculaConsumo() override;

        int getConsumo();
};

#endif

