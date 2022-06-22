#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Ser.hpp"

class Animal : public Ser {
    protected:
        std::string idade, familia;
        static int COMIDAPORPORCAO;

    public:
        Animal(std::string _nome, std::string _idade, std::string _familia);
        //Imprime as informações na tela
        void print() const override;
        virtual double kgComidaConsumida(int porcaoComida) const;
};

#endif
