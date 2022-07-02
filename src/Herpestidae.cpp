#include "Herpestidae.hpp"

int Herpestidae::QTD_PORCAO = 1;

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    double  qtd = this -> QTD_PORCAO*porcoesConsumidas;
    return qtd;
}

void Herpestidae::print(){
    Animal::print();
    std::cout << "  Especie: " << this -> _especie << std::endl;
    
}