#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

#include <iostream>

class Alimentacao{

    private:
        uint porcao;
        std::string comida;
        std::string descricao;
        std::string nomeAnimal;
        Cuidador cuidador;

    public:
        Alimentacao(int porcao, std::string comida, std::string descricao, 
            std::string nomeAnimal, Cuidador cuidador);
        void setPorcao(uint porcao);
        void setComida(std::string comida);
        uint getPorcao();
        std::string getDescricao();

        void print();
};

#endif