#include "Cuidador.hpp"

#include <iostream>

Cuidador::Cuidador(std::string _salario, std::string _nome, std::string _cpf,
                   std::string _telefone, std::string _aniversario)
    : salario(_salario),
      nome(_nome),
      cpf(_cpf),
      telefone(_telefone),
      aniversario(_aniversario) {}

std::string Cuidador::getNome() { return this->nome; }
