#include "Herpestidae.hpp"

Herpestidae::    Herpestidae(int _idade, std::string _nome, std::string _species): Animal(_idade, "Herpestidae", _nome), species(_species){

}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return HERPESTIDAE_QUANTIDADE_PORCAO*porcoesConsumidas;
}

void Herpestidae::print(){
    Animal::print();
    std::cout << "  Especie: " << species <<std::endl;
}