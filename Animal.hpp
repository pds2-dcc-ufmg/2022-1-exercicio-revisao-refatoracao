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
        Animal(int idade, string familia, string nome);
        void print();
};

#endif
