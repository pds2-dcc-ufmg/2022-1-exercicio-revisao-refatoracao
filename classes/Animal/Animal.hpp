#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    public:
        std::string IDADE;
        std::string family;
        std::string nome;

        void print();
        void print_oi();
};

#endif
