#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {

    public:
        static constexpr double pesoPorcao = 1.0;

    private:
        string especie;

    public:
        Herpestidae(string _nome, string _idade, string _especie);
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void print();

};

#endif
