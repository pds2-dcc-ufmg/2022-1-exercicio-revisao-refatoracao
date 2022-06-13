#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include <string>

#include "../Cuidador/Cuidador.hpp"

class Alimentacao {
    public:
        Cuidador cuid;
        std::string comida;
        unsigned int porcao;
        std::string descricao;
        std::string nomeAnimal;

    public:
        void print();
};

#endif
