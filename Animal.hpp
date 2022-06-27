#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using namespace std;

class Animal {
    protected:
        string _nome;
        string _familia;
        string _especie;
        int _idade;
    public:
        Animal(string nome, string familia, string especie, int idade);

        void printInformacoesAnimal();
};

#endif
