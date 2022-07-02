#ifndef Herpestidae_HPP
#define Herpestidae_HPP
#include "Animal.hpp"

class Herpestidae : public Animal {

    private:

        std::string familia, nome;
        int idade;
        std::string especie;

    public:

        Herpestidae(std::string nome, int idade, std::string familia, std::string especie);
        void print() override;
};

#endif
