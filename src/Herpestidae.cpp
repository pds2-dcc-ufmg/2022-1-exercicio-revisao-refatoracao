#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string idade, string especie, string nome):Animal(idade, "Herpestidae", nome){
    this->especie = especie;
}

string Herpestidae::getEspecie(){
    return this->especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    return porcoesConsumidas;
}

void Herpestidae::print() {
    Animal::print();
    cout << "  Especie: " << especie << endl;
} 

