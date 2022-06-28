#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

class Herpestidae : public Animal {
    private:
    static double quantPorcao;
    string especie;
    
    public:
    Herpestidae(int _idade,string _familia, string _nome, string _especie);    
    double kgConsumidosDeRacao(int porcoesConsumidas);
    void print() override;
};
#endif
