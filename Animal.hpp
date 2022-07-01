#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

//Superclasse de Herpestidae,Ursidae
class Animal {
    protected:
        int idade;
        std::string family;
        std::string nome;
    public:
        Animal(int _idade, std::string _familia, std::string _nome);
        std::string Get_nome();
        virtual void print();
};

#endif