#include "Herpestidae.hpp"

int Herpestidae::QUANTIDADEPORCAO = 1;

Herpestidae::Herpestidae(std::string _nome, std::string _idade, std::string _especie) : AnimalEspecie(_nome, _idade, "Herpestidae", _especie){}

double Herpestidae::kgComidaConsumida(int porcoesConsumidas) const{
    return QUANTIDADEPORCAO * porcoesConsumidas;
}