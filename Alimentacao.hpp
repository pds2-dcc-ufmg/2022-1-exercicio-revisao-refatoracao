#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include <string>
#include <iostream>


class Alimentacao
{
private:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuid;
    std::string nomeAnimal;

public:
    void print();

    void setPorcao(int _porcao);
    int getPorcao();

    void setComida(std::string _comida);
    std::string getComida();

    void setDescricao(std::string _descricao);
    std::string getDescricao();

    void setCuidador(Cuidador _cuid);
    Cuidador getCuidador();

    void setNomeAnimal(std::string _nomeAnimal);
    std::string getNomeAnimal();
};
#endif
