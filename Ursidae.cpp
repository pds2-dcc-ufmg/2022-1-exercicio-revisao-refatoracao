#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _especie, double _kg_peixe_por_dia, int _idade, std::string _familia, std::string _nome) :
    Animal(_idade, _familia, _nome), especie(_especie), kg_peixe_por_dia(_kg_peixe_por_dia), peixes_por_porcao(5) {}

void Ursidae::print()
{
    std::cout << "\n[Animal]" << std::endl
              << "  Nome: " << nome << std::endl
              << "  Idade: " << idade << std::endl
              << "  Família: Ursidae" << std::endl
              << "  Especie: " << especie << std::endl;
}

double Ursidae::peixes_consumidos(int porcaoPeixes)
{
    return peixesPorPorcao * porcaoPeixes;
}