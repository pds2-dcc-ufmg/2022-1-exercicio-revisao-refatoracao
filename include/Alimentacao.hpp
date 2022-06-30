#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

class Alimentacao{

    private:
        int porcao;
        string comida;
        string descricao;
        Cuidador cuid;
        string nomeAnimal;

    public:
        void print();
};

#endif