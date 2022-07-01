#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie) : Animal(_nome, _idade, "Ursidae", _especie) {
    this->kgPeixePorDia = 0;
}

Ursidae::Ursidae(std::string _nome, int _idade) : Animal(_nome, _idade, "Ursidae", "") {
    this->kgPeixePorDia = 0;
}

void Ursidae::setKgPeixePorDia(double _kgPeixePorDia) {
    this->kgPeixePorDia = _kgPeixePorDia;
}

double Ursidae::calcularPeixesConsumidos(int porcaoPeixes) {
    return PEIXESPORPORCAO*porcaoPeixes;
}