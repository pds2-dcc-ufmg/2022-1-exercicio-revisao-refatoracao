#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#include "Cuidador.hpp"

class Animal {
    protected:
        std::string nome;
        int idade;
        std::string familia;
        double kgPorcao;
        double kgConsumidos;

    public:
        Animal();
        Animal(std::string _nome, int _idade, std::string _familia);
        virtual ~Animal();
        
        // Leitura de dados
        virtual void print();
        virtual std::string getAtributo(std::string campo);
        Cuidador* getCuidador();

        // Escrita de dados
        virtual void setAtributo(std::string campo, std::string valor);
        void setCuidador(Cuidador& c);
        double somaKgConsumidos(float numPorcoes);
};

#endif
