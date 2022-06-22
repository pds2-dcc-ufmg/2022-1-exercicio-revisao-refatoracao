#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao{
    private:
        int porcao;
        std::string comida, descricao;
        Animal *animal;
        Cuidador cuidador;

    public:
        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Animal* _animal, Cuidador &_cuidador);
        int getPorcao() const;
        //Imprime as informações na tela
        void print() const;
        void setPorcao(int _porcao);
        void setComida(std::string _comida);
        std::string getDescricao() const;
};

#endif