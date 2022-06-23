#include "Herpestidae.hpp"

double Herpestidae::kgConsumidos(int porcoesConsumidas){
    double kg_consumidos = this->qnt_porcao * porcoesConsumidas;
    return kg_consumidos;
}

void Herpestidae::print(){
    Animal::print();
    cout << "Especie: " << this->species <<endl;
}