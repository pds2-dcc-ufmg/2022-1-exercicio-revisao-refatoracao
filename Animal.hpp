#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>
#include <string>

class Animal {
    private:
        std::string _familia;
        std::string _nome;
        int _idade;

    public:
        Animal();
        Animal(std::string nome, int idade, std::string familia);
        void setFamilia(std::string familia);
        void infoA();
};

#endif