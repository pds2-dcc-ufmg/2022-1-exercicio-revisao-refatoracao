#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
    protected:
        std::string nome;
        int idade;
        std::string especie = "";
        std::string familia;
    
    public:
        Animal(std::string _nome, int _idade, std::string _especie, std::string _familia);

        std::string getNome();

        virtual void imprimirDados();
        int calcularQtdAlimentos(int porcao); 
};

#endif