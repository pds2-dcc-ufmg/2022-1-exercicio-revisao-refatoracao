#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    public:
        std::string IDADE;
        std::string family;
        std::string nome;

        void print();
        void print_oi();
};

#endif
