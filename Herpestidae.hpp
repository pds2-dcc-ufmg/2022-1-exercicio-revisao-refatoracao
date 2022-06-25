#ifndef HERPESTIDAE_HPP 
#define HERPESTIDAE_HPP 

#include "Animal.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Herpestidae : public Animal {
    
    private:
    string idade;
    string nome;
    string especie;
    static int quantidadePorcao;

    public:
    using Animal::Animal;
    void setEspecie(string _especie);
    void print();
    double kgConsumidosDeRacao(int porcoesConsumidas);
};

#endif
