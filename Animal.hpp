#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    public:
        uint idade;
        std::string familia;
        std::string nome;

        Animal(std::string familia, std::string nome, uint idade);
        void print();
        void print_oi();
};

#endif
