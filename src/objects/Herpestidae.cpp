#include "D:\Projetos C\Pds2\Lista 2\Revisao e refatoracao\include\Herpestidae.hpp"

using namespace std;

Herpestidae::Herpestidae(string nome, int idade, string especie, Alimentacao* alimentacao, Cuidador* cuidador) : Animal("Herpestidae", nome, idade, alimentacao, cuidador) {
    _especie = especie;
}

void Herpestidae::print_informacoes(){
    Animal::print_informacoes();
    std::cout << "  Especie: " << _especie << std::endl;
}

double Herpestidae::kgConsumidos(int porcoesConsumidas) {
    return _QUANTPORCAO * porcoesConsumidas;
}

void Herpestidae::consumir(double kg){
    _kgConsumidos += kgConsumidos(kg);
}