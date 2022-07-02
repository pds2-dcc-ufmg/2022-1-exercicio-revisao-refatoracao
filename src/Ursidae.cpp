#include "Ursidae.hpp"

int Ursidae::PORCAO_PEIXE = 5;

double Ursidae::peixesConsumidos(int porcaoPeixes){
    double  qtd = this -> PORCAO_PEIXE*porcaoPeixes;
    return qtd;
}
void Ursidae::print(){
    Animal::print();
    std::cout << "  Especie: " << this -> _especie << std::endl;
    
}