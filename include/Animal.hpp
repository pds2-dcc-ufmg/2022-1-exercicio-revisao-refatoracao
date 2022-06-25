#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    protected:
        string idade;
        string familia;
        string nome;

    public:

        Animal();

        Animal(string idade, string familia, string nome);

        string getIdade();
        string getFamilia();
        string getNome();
        
        void print();
        void print_oi();

};

#endif
