#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, std::string _idade, std::string _especie) 
: Animal(_nome, _idade, "Herpestidae", _especie) {}

Herpestidae::Herpestidae(std::string _nome, std::string _idade)
: Animal(_nome, _idade, "Herpestidae") {}

Herpestidae::~Herpestidae() {}

double Herpestidae::calculaKgAlimentoConsumidos(int porcoesConsumidas) {
    return this->kgRacaoPorPocao * (double)porcoesConsumidas;
}