#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>


class Animal {

protected:
    std::string idade;
    std::string familia;
    std::string nome;

public:
    Animal(std::string idade, std::string familia, std::string nome); //Metodo construtor de um Animal
    Animal()=default;
    virtual void print();
};

#endif
