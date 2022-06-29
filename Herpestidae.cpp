#include "Herpestidae.hpp"

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
    return porcoesConsumidas;
}
void Herpestidae::print()
{
    std::cout << std::endl << "[Animal]" << std::endl;
    std::cout << "Nome: " << this->nome << std::endl; 
    std::cout << "Idade: " << this->idade << std::endl; 
    std::cout << "Familia: Herpestidae" << std::endl; 
    std::cout << "Especie: " << this->especie << std::endl;
}
