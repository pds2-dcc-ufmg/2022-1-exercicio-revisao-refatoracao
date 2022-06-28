#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <iostream>

class Cuidador {
 private:
  std::string salario, nome, cpf, telefone, aniversario;

 public:
  Cuidador(std::string _salario, std::string _nome, std::string _cpf,
           std::string _telefone, std::string _aniversario);
  std::string getNome();
};

#endif
