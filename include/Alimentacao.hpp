
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao {

    private:

        int porcao;

        std::string comida;

        std::string descricao;

        std::string nome_animal;

        Cuidador funcionario;

    public:

        Alimentacao(int _porcao, std::string _comida, std::string _nome_animal, Cuidador& _cuidador);
    
        void printAlimentacao();

        void setDescricao(std::string _descricao);

        int getPorcao();

        void setPorcao(int _porcao);

};

#endif