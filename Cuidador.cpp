#include "Cuidador.hpp"

void Cuidador::SetAtributos ( std::string chave, std::string valor ) {

  if( chave == "salario" ){
      this->_salario = valor ;
    
  }else if( chave == "nome"){
      this->_nome = valor ;
    
  }else if( chave == "cpf"){
      this->_cpf = valor ;
    
  }else if( chave == "telefone" ){
      this->_telefone = valor ;
     
  }else if( chave == "dataNascimento"){
      this->_dataNascimento = valor ;
    
  }
  
}

std::string Cuidador::GetNome () {
   return this->_nome;
  
}