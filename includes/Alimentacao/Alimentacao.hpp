#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <iostream>
#include "Cuidador/Cuidador.hpp"
#include "Animal/Animal.hpp"

class Alimentacao {

    private:

        int porcao;
        std::string comida;
        std::string descricao;
        Animal* animal;
        Cuidador* cuidador;

    public:

        Alimentacao(int porcao, std::string comida, std::string descricao, Animal* animal, Cuidador* cuidador);
        void imprimir();
        int getPorcao();
        Animal* getAnimal();

};

#endif
