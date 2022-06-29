
#ifndef VENDA_HPP
#define VENDA_HPP
#<iostream>
#include "Cuidador.hpp"



class Alimentacao{

    private:
    int porcao;
    std::string comida;
    std::string descricao;
    Cuidador cuidador;
    std::string nomeAnimal;
    
    
    public:
    
        Alimentacao(int _porcao, string _comida, string _descricao, string _nomeAnimal);
        void Cuidador( Cuidador _cuidador);
        void print();
        int getPorcao();

 };

#endif
