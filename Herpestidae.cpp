#include "Herpestidae.hpp"


std::string Herpestidae::getSpecies(){
    return species;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    double c = quantPORCAO*porcoesConsumidas;
    return c;
}

 void Herpestidae::print(){
    Animal::print();
    std::cout<<"Especie: " << species <<std::endl;
}