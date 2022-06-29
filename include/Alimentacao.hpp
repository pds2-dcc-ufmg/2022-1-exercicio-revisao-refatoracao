#ifndef VENDA_HPP
#define VENDA_HPP
#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuid;
        string nomeAnimal;
    public:
        Alimentacao(int, string, string, Cuidador, string);
        void print();
        int getPorcao();
        string getdescricao();
};

#endif