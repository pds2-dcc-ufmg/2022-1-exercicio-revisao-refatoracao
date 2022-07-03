#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

class Alimentacao{

    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuid;
    std::string nomeAnimal;

    public:

    Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal);

    std::string getDescricao();

    int getPorcao();

    void print();
};

#endif