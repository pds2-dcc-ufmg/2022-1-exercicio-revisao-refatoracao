#include "Ursidae.hpp"

Ursidae::Ursidae(string _nome, int _idade){
    this->familia = "Ursidae";
    this->especie = "Espécie não informada!";
    this->nome = _nome;
    this->idade = _idade;

}

double Ursidae::quantidadeDeAlimentoConsumida(int porcaoPeixes){
    int peixesPorPorcao = 5;
    double x = peixesPorPorcao*porcaoPeixes;
    return x;
}

double Ursidae::getKgPeixe(){
    return this->kgPeixePorDia;
}

void Ursidae::setkgPeixePorDia(int _kgPeixePorDia){
    this->kgPeixePorDia = _kgPeixePorDia;
}
 