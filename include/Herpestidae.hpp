#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {

    private:
        string especie;

    public:
        string getEspecie();

        Herpestidae(string idade, string especie, string nome);

        void print();

        double kgConsumidosDeRacao(int porcoesConsumidas);
};

#endif
