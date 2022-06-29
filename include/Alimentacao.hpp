#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
    private:
        int _porcao;
        string _comida;
        string _descricao;

    public:
    Alimentacao(int porcao, string comida, string descricao);
    string getDescricao();
    int getPorcao();
};

#endif