#ifndef URSIDAE_HPP
#define URSIDADE_HPP

#include "Animal.hpp"

class Ursidae : public Animal {

    private:
        int peixesPorPorcao = 5;
        double kgPeixePorDia;

    public:
        Ursidae(double _kgPeixesPorDia, Animal _animal);
        int calcularQtdAlimentos(int porcaoPeixes); 
        int getKgPeixePorDia();
        void setKgPeixePorDia(double kg);

};

#endif