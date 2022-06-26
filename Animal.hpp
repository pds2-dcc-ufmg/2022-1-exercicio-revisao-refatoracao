#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {

public:
    string idade;
    string familia;
    string nome;

    virtual void print();
};

#endif
