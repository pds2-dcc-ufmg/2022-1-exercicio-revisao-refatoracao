#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    protected:
        std::string _familia;
        std::string _nome;
        unsigned int _idade;

        double _kgConsumidos = 0;

    public:

        Animal(std::string familia, std::string nome, unsigned int idade);
        virtual ~Animal();

        std::string getFamilia() const;
        std::string getNome() const;
        unsigned getIdade() const;
        double getConsumoKg() const;

        virtual void print() const;

        virtual void adicionarConsumo(double kg); 
};

#endif
