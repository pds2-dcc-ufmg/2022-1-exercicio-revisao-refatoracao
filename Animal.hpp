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
        Animal(string familia, string nome, string idade);
        void print();
        void print_tchau();
        
};

#endif
