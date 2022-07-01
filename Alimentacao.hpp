
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>
#include <string>



class Alimentacao{
    private:
        std::string comida;
        std::string descricao;
        Cuidador cuid;
        std::string nomeAnimal;

    public:
        int porcao;
        
        void print();

        int get_porcao();

        std::string get_comida();

        std::string get_descricao();

        Cuidador get_cuid();

        std::string get_nome_animal();
};


#endif