#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {
    public:
    Herpestidae(std::string nome, std::string especie, int idade);
    void print() override;
};

#endif