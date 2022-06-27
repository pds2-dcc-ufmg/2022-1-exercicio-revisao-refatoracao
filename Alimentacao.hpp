#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"
#include <iostream>

class Alimentacao{

    protected:
    
        int porcao;
        std::string comida;
        std::string descricao;
        Cuidador cuid;
        std::string nomeAnimal;
        double kgConsumido;


    public:

        Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal, double _kgConsumidos);
        Alimentacao();
        void print();
        std::string getComida();
        double getKg();
};

#endif