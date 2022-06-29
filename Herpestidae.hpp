#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"


class Herpestidae : public Animal 
{
    private:
        std::string especie;
        int qtd_porcoes;

    public:
        Herpestidae(std::string _especie, int _idade, std::string _familia, std::string _nome);

        double racao_consumida(int porcoes_consumidas);
        virtual void print() override;
};

#endif
