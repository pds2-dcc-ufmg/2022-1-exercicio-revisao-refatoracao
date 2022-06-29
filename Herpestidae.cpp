#include "Herpestidae.hpp"

double Herpestidae::racao_consumida(int porcoes_consumidas)
{
    double c = qtd_porcoes * porcoes_consumidas;
    return c;
}

void Herpestidae::print()
{
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}