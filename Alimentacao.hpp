#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"
#include <iostream>

class Alimentacao{
    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuid;
        Animal* animal;
    public:
        Alimentacao(int _porcao,std::string _comida, std::string _descricao, Cuidador _cuid, Animal* _animal);
        std::string Get_descricao();
        int Get_porcao();
        void Set_porcao(int _porcao);
        void Set_comida(std::string _comida);
        void print();
};

#endif