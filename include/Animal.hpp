#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Animal {
    protected:
        int idade;
        std::string familia;
        std::string nome;
        std::string especie;

    public:
        Animal();
        int getIdade();
        void setInformacoes(int _idade, std::string _familia, std::string _nome, std::string _especie);
        void print();
};

#endif
