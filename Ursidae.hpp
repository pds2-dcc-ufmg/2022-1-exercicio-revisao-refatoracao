#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"


class Ursidae : public Animal{
    public:
        Ursidae(std::string nome, std::string especie, unsigned int idade, std::string familia) : Animal(nome, especie, idade, familia){}
        void hibernar(){
            std::cout << getNome() << ": " << "ZZZZZZZZZZZ" << std::endl << std::endl;
        }
        
};

#endif

