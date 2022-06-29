#ifndef ALIMENTACAO_H
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"


class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        Animal animal;

    public:
        void print();
};

#endif