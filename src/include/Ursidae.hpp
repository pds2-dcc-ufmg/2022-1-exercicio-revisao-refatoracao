#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae : public Animal {
    private:
    string _especie;
    double _kgPeixePorDIA;
    
    public:
    

    Ursidae(string nome, int idade, string especie, double comida):Animal(){
        this->idade = idade;
        this->nome = nome;
        this->familia = "Ursidae";
        this->_especie = familia;
        this->_kgPeixePorDIA = comida;
    }

    virtual void print() override{
        cout << endl << "[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Família: Ursidae" << endl << "  Especie: " << _especie << endl;
    }

    virtual double kgComidaConsumida(double porcao) override{
        return _kgPeixePorDIA*porcao;
    }

};

#endif

