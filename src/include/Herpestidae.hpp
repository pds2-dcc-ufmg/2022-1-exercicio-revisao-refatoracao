#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

double quantPORCAO = 1;


class Herpestidae : public Animal {
    private:
    string _especie;
    
    public:
    Herpestidae(string nome, int idade, string especie):Animal(){
        this->idade = idade;
        this->nome = nome;
        this->familia = "Hepestidae";
        this->_especie = especie;
    }   
    virtual double kgComidaConsumida(double porcao) override{
        return quantPORCAO*porcao;
    }
    virtual void print() override{
        cout << endl << "[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Família: Herpestidae" << endl << "  Especie: " << _especie << endl;
    }
     
};

#endif
