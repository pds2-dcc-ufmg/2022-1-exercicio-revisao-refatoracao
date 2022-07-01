#include "Herpestidae.hpp"

//metodo construtor de classe com heranca
Herpestidae::Herpestidae(std::string _especie,Animal animal):Animal(animal){
    this->especie = _especie;
}

//metodo retorna consumo de herpestidae
double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return quantPORCAO*porcoesConsumidas;
}

//metodo informa sobre Herpestidae
void Herpestidae::print(){
    std::cout << "\n[Animal]" << std::endl << "  Nome: " << nome << std::endl << "  Idade: " << idade << std::endl << "  Familia: " << family << std::endl << "  Especie: " << especie <<std::endl;
}