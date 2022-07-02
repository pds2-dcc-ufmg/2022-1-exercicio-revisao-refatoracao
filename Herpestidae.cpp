#include "Herpestidae.hpp"

const int Herpestidae::kQUANT_PORCAO = 1;

Herpestidae::Herpestidae(Animal& a): Animal(a) {}

Herpestidae::Herpestidae(Animal& a, double kgRacaoDia): Animal(a), kgRacaoPorDia(kgRacaoDia) {
    this->setFamilia('H');
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    return (Herpestidae::kQUANT_PORCAO)*porcoesConsumidas;
}

double Herpestidae::getkgRacaoPorDia(){
    return this->kgRacaoPorDia;
}