
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"
#include <iomanip>
#include <iostream>

class Alimentacao{
    private:
        Animal animal;
        Cuidador cuidador;
        std::string descricao;
        int porcao;
        std::string comida;  
    public:
        Alimentacao();
        Alimentacao(Animal _animal, Cuidador _cuidador, std::string _descricao, int _porcao, std::string _comida);
        void print();
        std::string getDescricao();
        Animal getAnimal();
        int getPorcao();
};

#endif