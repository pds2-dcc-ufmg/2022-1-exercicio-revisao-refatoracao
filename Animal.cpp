#include "Animal.hpp"

Animal::Animal ( std::string idade, std::string familia, std::string nome ) {

   this->_familia = familia ;
   this->_nome = nome ;
   this->_idade = idade ;
  
}

void Animal::print() {
  
      std::cout << std::endl << "[Animal]" << std::endl ;
      std::cout <<"  Nome: " << this->_nome << std::endl ;
      std::cout <<"  Idade: " << this->_idade << std::endl ;
      std::cout <<"  Familia: " << this->_familia << std::endl ;
          
}

void Animal::SetAtributos ( std::string chave, std::string valor ) {

   if( chave == "familia" ){
      this->_familia = valor ;
    
  }else if( chave == "nome"){
      this->_nome = valor ;
    
  }else if( chave == "idade"){
      this->_idade = valor ;
    
  }
  
}

double Animal::PorcaoConsumida ( double porcao ) {}
