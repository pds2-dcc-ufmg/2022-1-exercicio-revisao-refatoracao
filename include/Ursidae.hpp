#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

using namespace std;


class Ursidae : public Animal{
    private:
        const int _PEIXESPORPORCAO = 5;
        string _especie;
        double _consumoPeixe;

    public:
        Ursidae(string nome, int idade, double consumoPeixe = 0, string especie = "", Alimentacao* alimentacao = nullptr, Cuidador* cuidador = nullptr);

        void print_informacoes() override;
        double kgConsumidos(int porcoesConsumidas);
        void consumir(double kg);

};

#endif