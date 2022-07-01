#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    protected:
        int idade;
        string family;
        string nome;
    public:
        Animal(int _idade, string _familia, string _nome);
        virtual void print();
};

#endif