#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal 
{
    private:
    int idade;
    std::string nome;
    std::string especie;

    public:
    Animal();
    Animal(int _idade, std::string _nome);
    virtual void print();
    int getIdade();
    std::string getNome();
    std::string getEspecie();
    void setEspecie(std::string _especie);
};

#endif
