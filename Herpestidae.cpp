#include "Herpestidae.hpp"

int Herpestidae::quantidadePorcao = 1;

void Herpestidae::print(){ 
    Animal::print();
    cout<< "  Especie: " << this->especie << endl;          
}

void Herpestidae::setEspecie(string _especie){
  this->especie = _especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    return quantidadePorcao*porcoesConsumidas;
}
