#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string nome;
        std::string idade;
        std::string familia;
        std::string especie = "Não definida";

    public:
        Animal(std::string _nome, std::string _idade, std::string _familia);

        Animal(std::string _nome, std::string _idade, std::string _familia, std::string _especie);

        virtual ~Animal();

        std::string getNome();

        virtual double calculaKgAlimentoConsumidos(int porcoesConsumidas) = 0;
    
        virtual void print();
};

#endif
