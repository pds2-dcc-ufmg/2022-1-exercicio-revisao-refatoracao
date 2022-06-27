#include "Ursidae.hpp"

Animal::Ursidae::Ursidae(std::string _nome, int _idade){
    this->familia = "Ursidae";
    this->especie = "Espécie não informada!";
    this->nome = _nome;
    this->idade = _idade;

}

double Animal::Ursidae::quantidadeDeAlimentoConsumida(int porcaoPeixes){
    int peixesPorPorcao = 5;
    double x = peixesPorPorcao*porcaoPeixes;
    return x;
}

double Animal::Ursidae::getKgPeixe(){
    return this->kgPeixePorDia;
}

void Animal::Ursidae::setkgPeixePorDia(int _kgPeixePorDia){
    this->kgPeixePorDia = _kgPeixePorDia;
}
 