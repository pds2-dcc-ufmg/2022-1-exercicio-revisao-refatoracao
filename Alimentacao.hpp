#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include <iostream>

class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        std::string nomeAnimal;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuidador, std::string _nomeAnimal);
        void imprimirDadosAlimentacao();
        int getPorcao();
        std::string getComida();
        std::string getDescricao();
        std::string getNomeAnimal();
        Cuidador getCuidador();

        void setPorcao(int _porcao);
        void setComida(std::string _comida);
        void setDescricao(std::string _descricao);
        void setNomeAnimal(std::string _nomeAnimal);
        void setCuidador(Cuidador _cuidador);

};

#endif