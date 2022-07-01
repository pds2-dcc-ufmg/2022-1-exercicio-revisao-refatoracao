#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

namespace Animal{

    class Ursidae : public Animal::Animal{

        public:
        
            //Inicializa os valores do animal e fornece uma especie a ele
            Ursidae(std::string _nome, int _idade);

            //A função calcula a quantidade de alimento consumida por um Ursidae
            double quantidadeDeAlimentoConsumida(int porcaoPeixes);

    };
} //Ursidae se relaciona de forma intrinseca com Animal
#endif

