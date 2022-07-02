#include "Herpestidae.hpp"

Herpestidae::Herpestidae(Animal _animal) : Animal(_animal){ }

int Herpestidae::calcularQtdAlimentos(int porcoesConsumidas){
    return quantidadePorcao * porcoesConsumidas;                
}