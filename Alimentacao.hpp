#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao {

    private:
        int porcao;
        std::string comida;
        Animal *animal;
        Cuidador *cuidador;
        std::string descricao;

    public:
        Alimentacao(int _porcao, std::string _comida, Animal *_animal, Cuidador *_cuidador);

        void adicionarDescricao(std::string _descricao);

        void print();

};

#endif