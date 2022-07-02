#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Animal {
     private:
      string nome;
      int idade;
      string especie;

     protected:
      string familia;
      string comida;

     public:
      Animal();
      void print();
      void set_nome(string nome);
      void set_idade(int idade);
      void set_especie(string especie);
      string get_nome();
    };       

#endif
