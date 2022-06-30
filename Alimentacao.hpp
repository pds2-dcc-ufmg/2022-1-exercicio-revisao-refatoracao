#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao{

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        std::string nomeAnimal;
        Cuidador cuid;

    public:
        void print();

};

#endif