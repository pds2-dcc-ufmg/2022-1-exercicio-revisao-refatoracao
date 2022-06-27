#include "Ursidae.hpp"

Ursidae::Ursidae( Animal Ursidae, std::string especie, double KgPeixePorDiA) : Animal(Ursidae) {
  
     this->_especie = especie ;
     this->_KgPeixePorDiA = KgPeixePorDiA ;
  
}

 void Ursidae::print() {

    Animal::print();
    std::cout << "  Especie: " << _especie << std::endl ;
   
}

double Ursidae::PorcaoConsumida ( double porcao ) {
  
    double peixesPorPorcao = 5; 

    double consumo ;
    consumo = peixesPorPorcao * porcao ;
  
return consumo;
  
}