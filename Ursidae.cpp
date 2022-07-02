  
#include <iostream>
#include "Ursidae.hpp"


Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie, double _kg_peixe_por_dia) :
Animal(_nome, _idade), especie(_especie), kg_peixe_por_dia(_kg_peixe_por_dia){};

void Ursidae::print(){
    std::cout << "[Animal]" << std::endl;
    std::cout << "  Nome: " << this->getNome() << std::endl;
    std::cout << "  Idade: " << this->getIdade() << std::endl;
    std::cout << "  Familia: Ursidae" << std::endl << "  Especie: " << especie << std::endl;
}

