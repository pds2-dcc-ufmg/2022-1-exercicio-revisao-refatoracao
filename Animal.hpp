#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    public:
        string idade;
        string familia;
        string nome;
        void print();
};

#endif