#ifndef URSIDAE_H
#define URSIDAE_H

#include <iostream>

#include "Animal.hpp"

class Ursidae : public Animal {
 private:
  std::string especie;

 public:
  Ursidae(std::string _idade, std::string _familia, std::string _nome,
          std::string _especie);

  // Printa informações de determinado animal da espécie Ursidae.
  virtual void infoAnimal() override;
};

#endif
