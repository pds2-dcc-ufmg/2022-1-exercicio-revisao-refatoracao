#include "Ursidae.hpp"

Ursidae::Ursidae(std::string nome, std::string idade, std::string familia, 
    double kgPeixePorDia, std::string especie) : Animal(nome, idade, familia), 
    _kgPeixePorDia(kgPeixePorDia), _especie(especie){}

Ursidae::Ursidae(std::string nome, std::string idade, std::string familia) : 
    Animal(nome, idade, familia){
        _especie = "";
    // valores default pois nao tem como eu saber
}

Ursidae::Ursidae(){}

void Ursidae::print(){
    std::cout << "\n[Animal]" << std::endl;
    std::cout << "  Nome: " << getNome() << std::endl;
    std::cout << "  Idade: " << getIdade() << std::endl;
    std::cout << "  Familia: " << getFamilia() << std::endl;
    std::cout << "  Especie: " << _especie << std::endl;
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    int peixesPorPorcao = 5;
    double peixesConsumidos =  peixesPorPorcao * porcaoPeixes;
    return peixesConsumidos;
}
