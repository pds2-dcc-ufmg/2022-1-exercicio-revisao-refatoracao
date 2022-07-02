#include <iostream>
#include "Herpestidae.hpp"



Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _familia,std::string _especie): Animal(_nome,_idade,_familia), especie (_especie){};

void Herpestidae::print(){
    std::cout << "[Animal]" << std::endl << "  Nome: " << this->getNome() << std::endl ;
    std::cout << "  Idade: " << this->getIdade() << std::endl ;
    std::cout << "  Familia: Herpestidae" << std::endl << "  Especie: " << especie << std::endl;
}
