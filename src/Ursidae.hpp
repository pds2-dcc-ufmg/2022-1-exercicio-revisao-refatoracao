#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        std::string especie;
        static int quantPorcao;

    public:
        Ursidae();
        Ursidae(std::string _nome, int _idade, std::string _especie);

        // Leitura de dados
        void print() override;
        double peixesConsumidos(int porcoesConsumidas);
        double somaPeixesConsumidos(int);

        // Escrita de dados
        std::string getAtributo(std::string campo) override;
        void setAtributo(std::string campo, std::string valor) override;


};

#endif

