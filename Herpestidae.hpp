#ifndef Herpestidae_HPP
#define Herpestidae_HPP

#include "Animal.hpp"

class Herpestidae : public Animal {

    public:
        std::string especie;

        Herpestidae(std::string familia, std::string nome, uint idade, std::string especie);
        double calcularConsumoRacao(const int porcoesConsumidas);
        void print();
};
#endif // HERPESTIDAE_HPP