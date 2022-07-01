#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

    private:
        string especie;

    public:
        Herpestidae();
        Herpestidae(string nome, string especie, int idade);
        virtual void print() override;
};

#endif
