#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao{

private:
    int _porcao;
    std::string _comida;
    std::string _descricao;
    std::string _cuidador;
    std::string _nome;

public:

    Alimentacao(int porcao, std::string comida, std::string descricao, std::string cuidador, std::string nome);

    void print() const;
    std::string getNome() const;
    int getPorcao() const;
};

#endif