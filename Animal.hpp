#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    private:
        std::string nome;
        int idade;
        std::string familia;

    public:
        Animal(std::string _nome, int _idade, std::string _famillia);
        virtual double calculaConsumo(int porcao);
        void imprimirTchau();
        virtual void imprimirDadosAnimal();
};

#endif
