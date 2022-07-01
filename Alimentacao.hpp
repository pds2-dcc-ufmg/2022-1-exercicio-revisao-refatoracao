
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>
#include <string>



class Alimentacao{
    private:
        string comida;
        string descricao;
        Cuidador cuid;
        string nomeAnimal;

    public:
        int porcao;
        void print() {

            std::cout << "Animal: "<<std::endl;
            std::cout << nomeAnimal <<std::endl;
            std::cout << " Cuidador: "<<std::endl;
            std::cout << nomeAnimal <<std::endl;
        }

        int get_porcao(){
            return porcao;
        }

        std::string get_comida(){
            return comida;
        }

        std::string get_descricao(){
            return descricao;
        }

        Cuidador get_cuid(){
            return cuid;
        }

        std::string get_nome_animal(){
            return nomeAnimal;
        }
};

#endif