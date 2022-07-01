#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao{
    private:
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        std::string nome;
        
    public:
        Alimentacao(std::string _comida, std::string descricao,
        Cuidador _cuidador, std::string _nome);
        void print();
};

#endif