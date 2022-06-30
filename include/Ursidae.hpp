#ifndef URSIDAE_H
#define URSIDAE_H

#include "Animal.hpp"

class Ursidae : public Animal {
    
    private:

        std::string especie;

        double consumo_diario;

    public:

        Ursidae(std::string _nome, int _idade, std::string _especie, double _consumo_diario);

        virtual void print() override;

        double getConsumoDePeixe(int porcao);

};

#endif

