#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>

#include "Animal.hpp"

class Ursidae : public Animal {
    
    private:
        string especie;

    public:
        Ursidae();
        Ursidae(string _nome, int _idade, string _especie);
        virtual void print() override;
};

#endif