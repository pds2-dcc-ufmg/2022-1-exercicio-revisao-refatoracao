#ifndef ALIMENTACAO_H
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"


class Alimentacao {

    private:
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuidador;
        std::string nome_animal;

    public:
        void print();
};

#endif