#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using namespace std;

class Animal {
  protected:
    string idade;
    string family;
    string nome;

  public:
    Animal(string _idade, string _family, string _nome);
    string getNome();
    virtual void print();
    void printTchau();
};

#endif
