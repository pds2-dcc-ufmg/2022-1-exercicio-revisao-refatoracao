#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include <iostream>
#include <iomanip>
#include <string>

#include "Cuidador.hpp"
#include "Animal.hpp"

class Alimentacao
{
    private:
        static double _gastoPeixe;
        static double _gastoRacao;
        Cuidador cuidador;
        Animal* animal;
        double porcao;
        std::string comida;
        std::string descricao;
        std::string nomeAnimal;

    public:
        static double getGastoPeixe();
        static double getGastoRacao();
        void setCuidador(Cuidador const& _cuidador);
        void setAnimal(Animal* _animal);
        void setPorcao(double _porcao);
        void setComida(std::string _comida);
        void setDescricao(std::string _descricao);
        void alimentar();
        void print();
};

#endif