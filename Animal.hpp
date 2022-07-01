#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal 
{
    public:
    std::string idade;
    std::string familia;
    std::string nome;

    void print() 
    {
        std::cout << "\n[Animal]" << std::endl;
        std::cout << "  Nome: " << nome << std::endl;
        std::cout  << "  Idade: " << idade << std::endl;
        std::cout << "  Familia: " << familia << std::endl;
    }
};

#endif
