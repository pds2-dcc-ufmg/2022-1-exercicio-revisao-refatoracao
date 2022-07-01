#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    
    protected:
        std::string nome;
        int idade;
        std::string familia;
        std::string especie;

    public:
        Animal(std::string _nome, int idade, std::string familia, std::string especie);

        std::string getNome();

        void print();
        void printTchau();
};

#endif
