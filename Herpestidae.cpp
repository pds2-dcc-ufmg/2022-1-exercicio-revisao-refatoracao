#include "Herpestidae.hpp"

Herpestidae::Herpestidae( Animal Herpestidae, std::string especie) : Animal(Herpestidae) {

   this->_especies = especie ;
  
}
  
double Herpestidae::PorcaoConsumida ( double porcao ) {

   double quantidadePorPorcao = 1;
   double consumo ;
   consumo = quantidadePorPorcao * porcao ;
   
return consumo ;
   
}

void Herpestidae::print () {

   Animal::print();
   std::cout << "  Especie: " << _especies << std::endl;

}