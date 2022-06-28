
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"

#include <iostream>

class Alimentacao{
    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador* cuidador;
        Animal* animal;

    public:
        Alimentacao() = default;
        Alimentacao(std::string _comida, int _porcao, std::string _descricao, Cuidador& c, Animal& a);

        // Leitura de dados
        void print();
        std::string getAtributo(std::string campo);
        Animal* getAnimal();
        Cuidador* getCuidador();

        // Escrita de dados
        void setAnimal(Animal* a);
        void setCuidador(Cuidador* c);
        void setAtributo(std::string campo, std::string valor);
};

#endif