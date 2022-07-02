#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal 
{

    private:
    double quantidadePorcao;
    
    public:
    Herpestidae();
    Herpestidae(int _idade, std::string _nome);
    double kgConsumidosDeRacao(int porcoesConsumidas);
    virtual void print() override;
};

#endif
