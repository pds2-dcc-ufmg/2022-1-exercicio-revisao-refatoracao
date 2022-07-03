#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>


class Animal {
    int idade;
    std::string family;
    std::string nome;
public:
    Animal(int _idade, std::string _family, std::string _nome);

    void print();
};

#endif