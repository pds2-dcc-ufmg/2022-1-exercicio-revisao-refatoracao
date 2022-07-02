#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal
{
    private:
        static const int KG_PORCAO = 5;
        std::string especie;
        
    public:
        Ursidae(std::string _nome, std::string _idade, std::string _especie);
        virtual ~Ursidae() override;
        virtual double kgConsumidos(int _qntPorcoes) override;
        void print() override;
};

#endif

