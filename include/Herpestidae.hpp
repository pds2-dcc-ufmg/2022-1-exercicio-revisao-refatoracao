#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "../include/Animal.hpp"

class Herpestidae : public Animal {
    
    private:
    
        std::string especie;

    public:

        Herpestidae(std::string _nome, int _idade, std::string _especie);

        virtual void print() override;

        double getConsumoDeRacao(int consumo);

};

#endif
