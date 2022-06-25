#include "Ursidae.hpp"

int Ursidae::peixesPorPorcao = 5;

void Ursidae::setEspecie(string _especie){
  this->especie = _especie;
}

void Ursidae::setKgPeixePorDia(double _kgPeixePorDia){
  this->kgPeixePorDia = _kgPeixePorDia;
}

void Ursidae::print(){ 
    Animal::print();
    cout<< "  Especie: " << this->especie << endl;              
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return peixesPorPorcao*porcaoPeixes; 
}  
