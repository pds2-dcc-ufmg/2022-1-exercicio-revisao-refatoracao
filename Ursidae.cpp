#include "Ursidae.hpp"

Ursidae::Ursidae(double _kgPeixesPorDia, Animal _animal) : Animal(_animal){
    kgPeixePorDia = _kgPeixesPorDia;
}

int Ursidae::calcularQtdAlimentos(int porcaoPeixes){
    return peixesPorPorcao * porcaoPeixes;
}

int Ursidae::getKgPeixePorDia(){
    return this->kgPeixePorDia;
}

void Ursidae::setKgPeixePorDia(double kg){
    this->kgPeixePorDia = kg;
}