#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal 
{
    private:
        static const int KG_PORCAO = 1;
        std::string especie;

    public:
        Herpestidae(std::string _nome, std::string _idade, std::string _especie);
        virtual ~Herpestidae() override;
        virtual double kgConsumidos(int _qntPorcoes) override;
        void print() override;
};

#endif
