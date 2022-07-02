#include "Ursidae.hpp"

const int Ursidae::kPEIXES_POR_PORCAO = 5;

Ursidae::Ursidae(Animal& a): Animal(a) {}

Ursidae::Ursidae(Animal& a, double kgPeixePorDia): Animal(a), kgPeixePorDia(kgPeixePorDia){
    this->setFamilia('U');
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return porcaoPeixes*(Ursidae::kPEIXES_POR_PORCAO);
}

double Ursidae::getkgPeixePorDia(){
    return this->kgPeixePorDia;
}

void Ursidae::setkgPeixePorDia(double qtde){
    this->kgPeixePorDia = qtde;
}