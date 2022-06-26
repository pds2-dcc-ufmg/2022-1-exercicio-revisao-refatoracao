#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    protected:
        double qnt_porcao = 1;
        string especie;
    public:
    
        double kgConsumidos(int porcoesConsumidas);
        void print();
        double getQntPorcao();
        void setEspecie(string _especie);
};

#endif
