#include "Ursidae.hpp"

void Ursidae::print()
{
    std::cout << std::endl << "[Animal]" << std::endl;
    std::cout << "Nome: " << nome << std::endl; 
    std::cout << "Idade: " << idade << std::endl; 
    std::cout << "Familia: Ursidae" << std::endl; 
    std::cout << "Especie: " << especie << std::endl;
}
double Ursidae::PeixesConsumidos(double porcaoPeixes)
{
    return (porcaoPeixes * peixesPorPorcao);
}
