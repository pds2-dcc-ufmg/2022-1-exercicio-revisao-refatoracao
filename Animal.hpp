#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal{
    
    protected:
        std::string idade;
        std::string familia;
        std::string nome;
    
    public:

        Animal(std::string _idade, std::string _familia, std::string _nome);
        Animal() = default;
        virtual void print();
        
};

#endif
