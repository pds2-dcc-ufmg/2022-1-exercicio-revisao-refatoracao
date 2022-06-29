#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _especie, int _idade, std::string _familia, std::string _nome) :
    Animal(_idade, _familia, _nome), especie(especie), qtd_porcoes(1) {}


double Herpestidae::racao_consumida(int porcoes_consumidas)
{
    return qtd_porcoes * porcoes_consumidas;
}

void Herpestidae::print()
{
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}