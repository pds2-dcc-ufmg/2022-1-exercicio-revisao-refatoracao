#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
    private:
        std::string nome;
        int idade;
        std::string familia;
    public:
        Animal(std::string _nome, int _idade, std::string _familia);
        Animal();
        virtual void print();
        std::string getNome();
        int getIdade();
        std::string getFamilia();
};

#endif
