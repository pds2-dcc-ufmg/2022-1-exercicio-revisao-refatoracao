#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

#include <iostream>

class Alimentacao{
    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuid;
        string nomeAnimal;
    public:
        Alimentacao(int _porcao,std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal);
        std::string Get_descricao();
        int Get_porcao();
        void Set_porcao(int _porcao);
        void Set_comida(std::string _comida);
        void print();
};

#endif