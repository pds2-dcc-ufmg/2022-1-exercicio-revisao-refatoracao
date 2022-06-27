#ifndef ANIMAL_H
#define ANIMAL_H

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
        ~Animal();
        virtual void print();
        
};

#endif
