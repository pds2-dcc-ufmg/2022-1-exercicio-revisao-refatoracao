#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    private:
        string IDADE;
        string family;
        string nome;

    public:
        void print();

        void print_oi();
};

#endif
