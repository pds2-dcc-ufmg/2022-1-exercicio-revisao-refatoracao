#include "Ursidae.hpp"

Ursidae::Ursidae (string idade, string especie, string nome, double kgPeixePorDia):Animal(idade, "Ursidae", nome){
    this->especie = especie;
    this->kgPeixePorDia = kgPeixePorDia;
}

double Ursidae::getKgPeixePorDia(){
    return this->kgPeixePorDia;
}

string Ursidae::getEspecie(){
    return this->especie;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return porcaoPeixes*5;
}

void Ursidae::print(){
    cout << "\n[Animal]" << endl
    << "  Nome: " << getNome() << endl
    << "  Idade: " << getIdade() << endl
    << "  Família: Ursidae" << endl
    << "  Especie: " << especie << endl;
}