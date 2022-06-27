#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao{

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador* cuidador;
        Animal* animal;
        int kgConsumidos;

    public:
        //Inicializa as variaveis da classe alimentacao
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador* _cuidador, Animal* _animal);

        //Informa detalhes sobre a alimentação no zoológico
        void print();

        //Permite o acesso as variaveis privadas da classe fora dela
        int getPorcao();
        std::string getDescricao();
};

#endif