#ifndef Ursidae_h
#define Ursidae_h

#include "Animal.hpp"

class Ursidae : public Animal {
    
    private:
        string especie;
        double kgPeixePorDia;
 

    public:
        Ursidae(string idade, string especie, string nome, double kgPeixePorDia);
        string getEspecieUrsidae();
        void print();
        double calculaPeixesConsumidos(int porcaoPeixes);
};

#endif

