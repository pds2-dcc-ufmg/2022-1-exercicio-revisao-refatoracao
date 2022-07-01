#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal {
protected:
    int _idade;
    std::string _familia, _nome, _especie;
    int _comidaPorPorcao;
public:
    Animal(std::string nome, std::string familia, int idade);
    virtual ~Animal();

    virtual void print();
    virtual int calcularConsumo(int porcoesConsumidas);
    virtual std::string getNome();

};

#endif