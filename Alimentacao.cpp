#include "Alimentacao.hpp"

Alimentacao::Alimentacao( std::string porcao, std::string comida, std::string descricao, Cuidador cuidador, std::string nomeAnimal ) {

  this->_porcao = porcao;
  this->_comida = comida;
  this->_descricao = descricao;
  this->_cuidador =  cuidador;
  this->_nomeAnimal = nomeAnimal;
  
}

void Alimentacao::print () {
   
     std::cout << "Animal: " << _nomeAnimal << std::endl ;
     std::cout << " Cuidador: " << _cuidador.GetNome() << std::endl ;
     std::cout << " Descricao: " << this->_descricao << std::endl << std::endl;
}

std::string Alimentacao::GetAtributo ( std::string chave ) {

  if( chave == "porcao"){
      return this->_porcao ;
    
  }else if( chave == "comida"){
      return this->_comida ;
    
  }else if( chave == "descricao"){
      return this->_descricao;
    
  }else if( chave == "nomeAnimal"){
      return this->_nomeAnimal;
    
  }
  
}
