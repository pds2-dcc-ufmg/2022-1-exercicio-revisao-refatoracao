#include <iostream>

#ifndef CUIDADOR_H
#define CUIDADOR_H

class Cuidador{
  private:
    std::string _nome;

  public:
    Cuidador(std::string nome): _nome(nome) {}
	 ~Cuidador() {}
   std::string getNome();
};

#endif
