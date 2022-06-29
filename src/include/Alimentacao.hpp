#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include <iostream>
#include <iomanip>
#include <vector>


class Alimentacao{

    private:
        double quantidade;
        std::string nomeComida;
        std::string descricao;
        std::string data;
        Cuidador *cuid;

    public:
        Alimentacao(std::string nomeComida, double quantidade, std::string descricao, std::string data, Cuidador &cuid);
        // ~Alimentacao();
        void print();
};

#endif