#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, std::string _idade, std::string _especie) 
: Animal(_nome, _idade, "Ursidae", _especie) {}

Ursidae::Ursidae(std::string _nome, std::string _idade)
: Animal(_nome, _idade, "Ursidae") {}

Ursidae::~Ursidae() {}

double Ursidae::calculaKgAlimentoConsumidos(int porcoesConsumidas) {
    return this->kgPeixesPorPorcao * (double)porcoesConsumidas;
}