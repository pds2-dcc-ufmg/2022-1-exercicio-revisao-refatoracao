#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

#define PEIXESPORPORCAO 5

class Ursidae: public Animal {
  
    public:
      
       Ursidae():Animal(std::string nome, int idade, std::string familia, std::string especie) {
            familia = 'Ursidae';
        }
  
       Animal::print();

       Ursidae::calculaPeixesConsumidos(int porcaoPeixes) {
            double kgDePeixe = PEIXESPORPORCAO * porcaoPeixes;
            return kgDePeixe;
        }

};

#endif

