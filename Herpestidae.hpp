#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"


class Herpestidae : public Animal {

    private:
        const std::string familia = "Herpestidae";

    public:
        Herpestidae(std::string nome, std::string especie, unsigned int idade, std::string familia) : Animal(nome, especie, idade, familia){}
        void fazOUrro() {
            std::cout << getNome() << ": " <<"Hrrrrrrrrrrrr" << std::endl << std::endl;
        }
};

#endif
