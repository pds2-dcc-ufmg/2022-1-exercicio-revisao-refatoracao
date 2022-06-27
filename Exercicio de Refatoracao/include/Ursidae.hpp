#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

namespace Animal{

    class Ursidae : public Animal::Animal{
        private:

            double kgPeixePorDia;

        public:
        
            //Inicializa os valores do animal e fornece uma especie a ele
            Ursidae(std::string _nome, int _idade);

            //A função calcula a quantidade de alimento consumida por um Ursidae
            double quantidadeDeAlimentoConsumida(int porcaoPeixes);

            //Permite que valores privados da classe sejam acessados fora dela
            double getKgPeixe();
            std::string getEspecie();

            //Permite modificar os atributos privados fora da classe
            void setkgPeixePorDia(int _kgPeixePorDia);

    };
} //Ursidae se relaciona de forma intrinseca com Animal
#endif

