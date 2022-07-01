#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Herpestidae.hpp"
#include "Ursidae.hpp"

class Alimentacao{
    private:
        int _quantPorcoes;
        std::string _tipoComida;
        std::string _descricao;
        Cuidador _cuidador;
        std::string _nomeAnimal;
        Herpestidae _herpestidae;
        Ursidae _ursidae;
    
    public:
        Alimentacao();
        Alimentacao(int quantPorcoes, std::string tipoComida, std::string descricao, Cuidador cuidador, std::string nomeAnimal);
        void print();
        int kgComidaConsumidos();
};

#endif