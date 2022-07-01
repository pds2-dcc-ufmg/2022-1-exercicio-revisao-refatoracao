#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

#define KGPORPORCAO 1

class Herpestidae : public Animal {

    public:
        Herpestidae(std::string _nome, int _idade, std::string _especie);
        Herpestidae(std::string _nome, int _idade);

        double calcularKgConsumidosDeRacao(int porcoesConsumidas);
        
};

#endif
