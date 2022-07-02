#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;



class Herpestidae : public Animal {
    public:
        Herpestidae(string _idade, string _nome, string _especie);
        Herpestidae(string _idade, string _nome);
        double kgConsumidosDeRacao(int porcoesConsumidas);
};

#endif
