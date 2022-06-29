#include "Ursidae.hpp"
void Ursidae::print() {
            
            std::cout << "\n[Animal]:" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  Família: Ursidae" << std::endl;
            std::cout << "  Especie: " << especie << std::endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
        int peixesPorPORCAO = 5; 
        return peixesPorPORCAO*porcaoPeixes;
}