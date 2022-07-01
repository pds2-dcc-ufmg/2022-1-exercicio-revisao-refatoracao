#include "Ursidae.hpp"

Animal::Ursidae::Ursidae(std::string _nome, int _idade){
    this->familia = "Ursidae";
    this->nome = _nome;
    this->idade = _idade;

}

double Animal::Ursidae::quantidadeDeAlimentoConsumida(int porcaoPeixes){
    int peixesPorPorcao = 5;
    double x = peixesPorPorcao*porcaoPeixes;
    return x;
}
