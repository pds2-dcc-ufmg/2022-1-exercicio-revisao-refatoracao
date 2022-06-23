#ifndef Herpestidae_h
#define Herpestidae_h

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        string especie;

    public:
        Herpestidae(string idade, string especie, string nome);
        string getEspecie();
        double kgConsumidosDeRacao(int porcoesConsumidas);
        void printHerpestidae();
};

#endif
