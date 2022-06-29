#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

double qtd_porcoes = 1;

class Herpestidae : public Animal 
{
    private:
        std::string especie;

    public:

        double kgConsumidosDeRacao(int porcoes_consumidas) 
        {
            double c = qtd_porcoes * porcoes_consumidas;
            return c;
        }


        void print() {
            Animal::print();
            std::cout << "  Especie: " << especie << std::endl;
        }
};

#endif
