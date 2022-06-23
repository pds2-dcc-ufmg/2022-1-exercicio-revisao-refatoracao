#ifndef Alimentacao_h
#define Alimentacao_h

#include "Cuidador.hpp"

class Alimentacao{

    private:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    string nomeAnimal;

    public:
    Alimentacao();
    Alimentacao(int porcao, string comida, string descricao, Cuidador cuidador, string nomeAnimal);
    void printAlimentacao();
    void setPorcao(int porcao);
    void setComida(string comida);
    int getPorcao();
    string getComida();
    string getDescricao();
};

#endif