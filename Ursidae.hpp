#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Ursidae : public Animal { 

    private:

        std::string _especie;
        double _KgPeixePorDiA;

    public:

        Ursidae( Animal Ursidae, std::string especie, double KgPeixePorDiA) ;
        virtual void print() override ;
        virtual double PorcaoConsumida ( double porcao ) override ;

};

#endif

