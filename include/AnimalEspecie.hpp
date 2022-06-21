#ifndef ANIMALESPECIE_HPP
#define ANIMALESPECIE_HPP

#include "Animal.hpp"

class AnimalEspecie : public Animal{
    protected:
        std::string especie;
    public:
        AnimalEspecie(std::string _nome, std::string _idade, std::string _familia, std::string _especie);
        //Imprime as informações na tela
        void print() const override;
};

#endif