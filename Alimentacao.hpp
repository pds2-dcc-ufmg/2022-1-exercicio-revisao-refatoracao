
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>
#include <string>
#include "Cuidador.hpp"

class Alimentacao{

    private:
        static int kgPeixes;
        static int kgRacao;
        int unPeixes;
        int unRacao;
        int unRacaoEspecial;
        Cuidador cuid;
        std::string descricao;

    public:
        Alimentacao(int _unPeixes, int _unRacao, int _unRacaoEspecial, Cuidador& _cuid, std::string _descricao);
        virtual ~Alimentacao();
        void escreverDescricao(std::string _descricao);
        void printRelatorio();
        int getTotalPeixes();
        int getTotalRacao();

};

#endif