#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

#include "Cuidador.hpp"

class Animal {
 private:
  std::string idade, familia, nome, comida, descricao, nomeCuidador;
  int porcao;

 public:
  Animal(std::string _idade, std::string _familia, std::string _nome);
  void setAlimentacaoInfo(std::string _comida, std::string _descricao,
                          std::string _nomeCuidador, int _porcao);
  int getPorcao();
  std::string getNome();
  std::string getNomeCuidador();
  std::string getDescricao();

  // Printa informações de determinado animal, não determinando sua espécie.
  virtual void infoAnimal();
};

#endif
