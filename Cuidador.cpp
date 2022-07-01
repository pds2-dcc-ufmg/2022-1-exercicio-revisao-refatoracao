#include "Cuidador.hpp"

Cuidador::Cuidador(std::string salario ,std::string nome,std::string cpf, std::string telefone, std::string dataNascimento ){
      this->_salario = salario ;
      this->_nome = nome ;
      this->_cpf = cpf ;
      this->_telefone = telefone ;
      this->_dataNascimento = dataNascimento ;
}

std::string Cuidador::GetNome () {
   return this->_nome;
}


