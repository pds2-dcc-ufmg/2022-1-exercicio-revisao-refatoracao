#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal {
    private:
        std::string family, nome;
        int idade;
    public:
        Animal(std::string nome,  int idade, std::string familia);
        Animal(std::string nome, int idade);
        virtual void print();
        std::string getNome();
        int getIdade();
};

#endif
