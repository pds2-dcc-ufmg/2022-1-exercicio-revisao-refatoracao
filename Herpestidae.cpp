#include "Herpestidae.hpp"


double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
{
    double kgRacaoConsumida = quantPorcao * porcoesConsumidas;
    return kgRacaoConsumida;
}

void Herpestidae::print()
{
    Animal::print();

    std::cout << "  Especie: " << especie << std::endl;
}

void Herpestidae::setEspecie(std::string _especie)
{
    especie = _especie;
}

std::string Herpestidae::getEspecie()
{
    return especie;
}


