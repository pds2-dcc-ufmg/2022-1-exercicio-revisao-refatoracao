#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, std::string _idade, std::string _especie, double _quantidadePeixe){
    nome = _nome;
    idade = _idade;
    especie = _especie;
    quantidadePeixe = _quantidadePeixe;
    familia = "Ursidae";
}

void Ursidae::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Família: Ursidae" << std::endl;
    std::cout << "Especie: " << especie << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return NUMEROPEIXES*porcaoPeixes;
}