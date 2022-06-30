#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"


class Herpestidae : public Animal {
    public:
        Herpestidae(std::string nome, std::string especie, unsigned int idade, std::string familia) : Animal(nome, especie, idade, familia){};
        void fazOUrro();
};

#endif
