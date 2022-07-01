
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

#include <string>
#include <iostream>

class Alimentacao{

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        Animal animal;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuidador, Animal _animal);
        
        void print();

};

#endif