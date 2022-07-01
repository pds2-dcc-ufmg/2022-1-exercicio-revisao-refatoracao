#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include "Animal.hpp"

class Ursidae : public Animal {

    private:
        string especie;

    public:
        Ursidae();
        Ursidae(string nome, string especie, int idade);
        virtual void print() override;
};

#endif

