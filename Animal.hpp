#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class Animal {
    
    protected:
    int idade;
    string familia;
    string nome;
    string especie;

    public:

    Animal(int _idade, string _familia, string _nome, string _especie);

    Animal();

    ~Animal();

    int getIdade();

    string getFamilia();

    string getEspecie();

    string getNome();

    void print();
};

#endif
