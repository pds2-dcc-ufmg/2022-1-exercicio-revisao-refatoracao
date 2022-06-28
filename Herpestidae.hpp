#ifndef HERPESTIDAE_H
#define HERPESTIDAE_H

#include "Animal.hpp"

class Herpestidae : public Animal {
 private:
  std::string especie;

 public:
  Herpestidae(std::string _idade, std::string _familia, std::string _nome,
              std::string _especie);

  // Printa informações de determinado animal da espécie Herpestidae.
  virtual void infoAnimal() override;
};

#endif
