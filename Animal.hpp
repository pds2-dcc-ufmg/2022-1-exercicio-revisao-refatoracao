#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

class Animal 
{
    protected:
        std::string nome;
        std::string idade;
        std::string familia;
        int kgPorcao;

    public:
        Animal(std::string _nome, std::string _idade, std::string _familia);
        virtual ~Animal();
        std::string getNome();
        std::string getFamilia();
        virtual double kgConsumidos(int _qntPorcoes);
        virtual void print();
};

#endif
