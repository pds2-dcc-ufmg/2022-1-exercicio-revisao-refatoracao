#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

using namespace std;


class Ursidae : public Animal {
    private:
        double _consumoDePeixe;
        const int _PEIXESPORPORCAO = 5;
    public:
        Ursidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador);
        Ursidae(string nome, int idade);
        Ursidae(string nome, int idade, string especie);

        int getConsumo();
};

#endif

