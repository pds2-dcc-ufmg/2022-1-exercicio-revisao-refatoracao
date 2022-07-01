#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _especie, double _kg_peixe_por_dia, int _idade, std::string _nome) :
    Animal(_idade, "Ursidae", _nome), especie(_especie), kg_peixe_por_dia(_kg_peixe_por_dia), peixes_por_porcao(5) {}

void Ursidae::print()
{
    Animal::print();
    std::cout << "  Especie: " << especie << std::endl;
}

double Ursidae::peixes_consumidos(int porcaoPeixes)
{
    return peixes_por_porcao * porcaoPeixes;
}