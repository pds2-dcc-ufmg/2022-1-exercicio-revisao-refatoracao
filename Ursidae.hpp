#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

int peixesPorPorcao = 5;

class Ursidae {

    private:
        int idade;
        std::string nome;
        std::string especie;
        double kgPeixePorDia;

    
    public:

        void print() {
            std::cout << "\n[Animal]" << std::endl
                    << "  Nome: " << nome << std::endl
                    << "  Idade: " << idade << std::endl
                    << "  Família: Ursidae" << std::endl
                    << "  Especie: " << especie << std::endl;
        }

        double peixesConsumidos(int porcaoPeixes){
            double x;
            return peixesPorPorcao * porcaoPeixes;
        }

};

#endif

