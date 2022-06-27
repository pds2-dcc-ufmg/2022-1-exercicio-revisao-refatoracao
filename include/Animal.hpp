#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    private:
        int _idade;
        string _familia;
        string _nome;

    public:
        Animal(int idade, string nome);
        Animal(int idade, string familia, string nome);
        virtual void print();
        string getNome();
        int getIdade();
};

#endif
