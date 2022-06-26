#include "Ursidae.hpp"

void Ursidae::print(){
    cout <<"\n[Animal]" << endl
        << "Nome: "<< this->nome << endl
        << "Idade: " << this->idade << endl
        << "Família: Ursidae" << endl
        << "Especie: " << this->especie << endl;
}

double Ursidae::peixesConsumidos(int porcaoPeixes){
    double total;
    total = this->peixes_por_porcao * porcaoPeixes;
    return total;
}
