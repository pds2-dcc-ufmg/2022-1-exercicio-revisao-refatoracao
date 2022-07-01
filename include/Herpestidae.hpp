#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        string especie;

    public:
        virtual ~Herpestidae();
        Herpestidae();
        Herpestidae(string _nome, int _idade, string _especie);
        virtual void print() override;
};

#endif