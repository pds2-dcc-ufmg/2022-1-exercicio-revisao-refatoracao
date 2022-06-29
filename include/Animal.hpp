#ifndef ANIMAL_HPP
#define ANIMAL_HPP
using namespace std;
#include<iostream>

class Animal {
    protected:
        int idade;
        string family;
        string nome;
    public:
        Animal();
        Animal(string, int, string);
        void print();
        void print_oi();
};

#endif
