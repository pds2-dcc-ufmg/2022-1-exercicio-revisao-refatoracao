#include "Ursidae.hpp"

Ursidae::Ursidae(double peixe_por_dia,std::string _especie,Animal animal):Animal(animal){
    this->kgPeixePorDIA = peixe_por_dia;
    this->especie = _especie;
}

void Ursidae::print(){
    cout << "\n[Animal]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << idade << endl
    << "  Família: Ursidae" << endl
    << "  Especie: " << especie << endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    return peixesPorPORCAO*porcaoPeixes;
}