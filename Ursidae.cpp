#include "Ursidae.hpp"

void Ursidae::print() {
            std::cout << "\n[Animal]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  Família: Ursidae" << std::endl
              << "  Especie: " << especie << std::endl;
        }

        double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
            double x;
            return peixesPorPORCAO*porcaoPeixes;
        }