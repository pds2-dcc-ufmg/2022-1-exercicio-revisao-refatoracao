#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    protected:
        string nome;
        int idade;
        string family;
        string especie;
    
    public:
        Animal(string nome, int idade, string family);
        void print();
};

#endif
