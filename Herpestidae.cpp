#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, std::string _idade, std::string _especie){
    nome = _nome;
    idade = _idade;
    especie = _especie;
    familia = "Herpestidae";
}

double Herpestidae::consumoRacao(int numeroPorcoes){
    return QUANTIDADE*numeroPorcoes;
}

void Herpestidae::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout<< "Idade: " << idade << std::endl;
    std::cout << "Familia: " << familia << std::endl;
    std::cout << "Espécie:" << especie << std::endl;
}

