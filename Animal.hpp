#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal{
    private:
    int idade;
    string familia;
    string nome;
    
    public:
    Animal(int _idade, string _familia, string _nome);
    virtual void print() = 0;
    int getIdade();
    string getFamilia();
    string getNome();
};
#endif
