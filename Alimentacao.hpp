#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{
    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador& cuid;
        string nomeAnimal;
        
    public:
        Alimentacao(int porcao, string comida, Cuidador& cuid, string nomeAnimal);
        string getDescricao();
        void setDescricao(string desc);
        void print();
};

#endif