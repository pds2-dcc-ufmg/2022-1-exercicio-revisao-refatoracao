#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Animal {
    
    private:
    string idade;
    string familia;
    string nome;

    public:
    Animal(string _idade, string _nome, string _familia);
    void print();
};

#endif
