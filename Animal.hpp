#include <iostream>

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
  private:
    std::string _nome, _familia;
    int _idade;
    
  public:
    Animal(std::string nome, std::string familia, int idade): _nome(nome), _familia(familia), _idade(idade) {}
    virtual ~Animal() {}
    virtual void imprimirInformacoes();
    std::string getNome();
};

#endif