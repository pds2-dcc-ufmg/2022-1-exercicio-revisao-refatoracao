#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"

using namespace std;

class Alimentacao{
    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuid;
        Animal animal;
        
    public:
        Alimentacao(int porcao, string comida, Cuidador cuid, Animal animal);
        int getPorcao();
        void setPorcao(int porcao);
        void setComida(string comida);
        string getDescricao();
        void setDescricao(string desc);
        void print();
};

#endif