#include "D:\Projetos C\Pds2\Lista 2\Revisao e refatoracao\include\Ursidae.hpp"

using namespace std;

Ursidae::Ursidae(string nome, int idade, double consumoPeixe, string especie = "", Alimentacao* alimentacao = nullptr, Cuidador* cuidador) : Animal("Ursidae", nome, idade, alimentacao, cuidador) {
    _especie = especie;
    _consumoPeixe = consumoPeixe;
}

void Ursidae::print_informacoes(){
    Animal::print_informacoes();
    std::cout << "  Especie: " << _especie << std::endl;
}

double Ursidae::kgConsumidos(int porcoesConsumidas) {
    return _PEIXESPORPORCAO * porcoesConsumidas;
}

void Ursidae::consumir(double kg){
    _kgConsumidos += kgConsumidos(kg);
}