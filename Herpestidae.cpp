#include "Herpestidae.hpp"

Herpestidae::Herpestidae()
{
    this->quantidadePorcao = 1;
}

Herpestidae::Herpestidae(int _idade, std::string _nome) : Animal (_idade, _nome)
{
    this->quantidadePorcao = 1;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) 
{
    return quantidadePorcao * porcoesConsumidas;
}
void Herpestidae::print() 
{
    std::cout << std::endl << "[Animal]" << std::endl << "  Nome: " << this->getNome() << std::endl 
                           << "  idade: " << this->getIdade() << std::endl << "  Família: Herpestidae"
                           << std::endl << "  Especie: " << this->getEspecie() << std::endl;
}