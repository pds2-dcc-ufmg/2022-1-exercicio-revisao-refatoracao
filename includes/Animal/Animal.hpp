#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {

  protected:
  
    std::string nome;
    std::string familia;
    std::string especie;
    int idade;
    int quantidadePorcao;
  
  public:
  
    void imprimir();
    std::string getNome();
    std::string getFamilia();
    int getQuantidadePorcao();
  
};

#endif
