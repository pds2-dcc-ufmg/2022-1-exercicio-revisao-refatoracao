#include "Herpestidae.hpp"
double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
        double quantPORCAO = 1;
        double c = quantPORCAO*porcoesConsumidas;
                  return c;
    }


void Herpestidae::print() {
  
        std::cout << "\n[Animal]: " << std::endl;
        std::cout << "  Nome: " << nome << std::endl;
        std::cout << "  Idade: " << idade << std::endl;
        std::cout << "  Família: Herpestidae " << std::endl;
        std::cout << "  Especie: " << especie << std::endl;

    }