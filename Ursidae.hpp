#ifndef URSIDAE_HPP
#define URSIDAE_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
using namespace std;

int peixesPorPorcao = 5;

class Ursidae : public Animal{
    public:

        string especie;
        double kgPeixePorDia;
        Ursidae(int _idade,string _nome,string _especie,double _kgPeixePorDia){
            idade = _idade;
            nome = _nome;
            familia = "Ursidae";
            especie = _especie;
            kgPeixePorDia = _kgPeixePorDia;
        }
        virtual void print() override{
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  Família: " << familia << endl
            << "  Especie: " << especie << endl;
        }

        double calculaPeixesConsumidos(int porcaoPeixes){
            double saida = peixesPorPorcao*porcaoPeixes;
            return saida;
        }

};

#endif

