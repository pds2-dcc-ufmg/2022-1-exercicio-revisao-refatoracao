#include"Ursidae.hpp"

double Ursidae::peixesConsumidos(int porcaoPeixes){

    return 5*porcaoPeixes;
}
void Ursidae::print() {

    Animal::print();
    std::cout<< "  Especie: "<< especie<<endl;
}
