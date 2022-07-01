#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
    protected:
        int idade;
        std::string nome;

    public:
        Animal(int _idade, std::string _familia, 
        std::string _nome);
        std::string getnome();
        virtual void print()=0;
};

#endif
