#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    
    protected:
        std::string nome;
        std::string idade;
        std::string familia;
        std::string especie;

    public:
        void print();
        void print_oi();
};

#endif
