#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    private:
        int idade;
        std::string nome;
        std::string familia;
        std::string especie;

    public:
        Animal(int _idade, std::string _nome, std::string familia, std::string _especie);
        void print();
        std::string getNome();
};

#endif
