#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
    unsigned int idade;
    std::string familia;
    std::string nome;
    std::string especie;

public:
    Animal(unsigned int _idade, std::string _familia, std::string _nome);

    virtual void print();
};

#endif
