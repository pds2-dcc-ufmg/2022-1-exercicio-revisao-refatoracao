#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _especie,Animal animal):Animal(animal){
    this->especie = _especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return quantPORCAO*porcoesConsumidas;
}

void Herpestidae::print(){
    cout << "\n[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Familia: " << family << endl << "  Especie: " << especie <<endl;
}