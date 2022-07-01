#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal {
    private:
        std::string _familia;
        std::string _nome;
        int _idade;
        std::string _especie;
        int peixesPorcao = 5;

    public:
        Ursidae();
        Ursidae(std::string nome, int idade, std::string especie);
        void infoU();
        int kgConsumidosPeixe(int porcoesConsumidas);
};

#endif
