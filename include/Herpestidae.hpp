#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include <string>

#include "Animal.hpp"

class Herpestidae : public Animal {

    public:
        Herpestidae(int _idade, std::string _nome, std::string _especie);
        double kgConsumidosDeRacao(int totalPorcoes, double kgPorPorcao);
};

#endif
