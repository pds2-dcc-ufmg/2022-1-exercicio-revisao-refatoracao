#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao {
    private: 
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuid;
        Animal* animal;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador& _cuid, Animal* _animal);

        ~Alimentacao();

        int getPorcao();

        void print();
};

#endif