#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {

    protected:
        string ALIMENTO;
        int idade;
        string familia;
        string nome;
        double kgAlimentoConsumido = 0;

    public:
        Animal();
        Animal(string _nome, int _idade, string _familia);
        virtual void print();
        void setKgAlimentoConsumido(double kg);
        double getKgAlimentoConsumido();
        string getNome();
        string getALIMENTO();
};

#endif