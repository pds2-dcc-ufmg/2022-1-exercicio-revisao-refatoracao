#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    private:
        int idade;
        std::string familia;
        std::string nome;

    public: 
        Animal() {};
        Animal(std::string _familia, std::string _nome, int _idade);
        virtual void mostrarInfo();
};

#endif
