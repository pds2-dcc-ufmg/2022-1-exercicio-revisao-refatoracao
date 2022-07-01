#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

class Alimentacao{
    private:
        int porcao;
        std::string comida;
        std::string descricao;
        std::string nomeAnimal;
        Cuidador cuidador;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, std::string _nomeAnimal, Cuidador& _cuidador);
        void imprimirNomeAnimalCuidador();
        int getPorcao();
        void setPorcao(int _porcao);
        std::string getDescricao();
};

#endif