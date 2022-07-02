#include "D:\Projetos C\Pds2\Lista 2\Revisao e refatoracao\include\Animal.hpp"

using namespace std;

Animal::Animal(string familia, string nome, int idade, Alimentacao* alimentacao, Cuidador* cuidador){
    _alimentacao = alimentacao;
    _familia = familia;
    _nome = nome;
    _idade = idade;
    _cuidador = cuidador;
}

string Animal::getNome(){
    return _nome;
}

double Animal::getKgConsumidos() {
    return _kgConsumidos;
}

void Animal::print_informacoes(){
    std::cout   << "\n[Animal]" << std::endl
                << "  Nome: " << _nome << std::endl
                << "  Idade: " << _idade << std::endl
                << "  Familia: " << _familia << std::endl;
}

