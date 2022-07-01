#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
    private:
        int kgPorcaoRacao = 1;
        std::string _familia;
        std::string _nome;
        int _idade;
        std::string _especie;
    
    public:
        Herpestidae();
        Herpestidae(std::string nome, int idade, std::string especie);
        void infoH();
        int kgConsumidosRacao(int porcoesConsumidas);
};

#endif