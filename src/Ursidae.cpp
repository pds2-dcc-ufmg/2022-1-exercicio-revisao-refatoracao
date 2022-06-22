#include "Ursidae.hpp"

int Ursidae::PEIXESPORPORCAO = 5;

Ursidae::Ursidae(std::string _nome, std::string _idade, std::string _especie, double _kgPeixesPorDia) : AnimalEspecie(_nome, _idade, "Ursidae", _especie),
kgPeixesPorDia(_kgPeixesPorDia) {}

double Ursidae::kgComidaConsumida(int porcaoPeixes) const{
    return PEIXESPORPORCAO * porcaoPeixes;
}