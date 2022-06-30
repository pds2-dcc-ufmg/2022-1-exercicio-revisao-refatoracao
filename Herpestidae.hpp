#ifndef HERPESTIDAE_HPP
#define HERPESTIDAE_HPP

#include "Animal.hpp"

using namespace std;

double quantidadePorPorcao = 1.0;


class Herpestidae : public Animal {

    public:
        string especie;
        Herpestidae(int _idade,string _nome,string _especie){
            nome = _nome;
            idade = _idade;
            familia = "Herpestidae";
            especie = _especie;
        }
        double kgConsumidosDeRacao(int porcoesConsumidas) {
            double saida = quantidadePorPorcao*porcoesConsumidas;
            return saida;
        }
        virtual void print() override{
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  Familia: " << familia << endl
            << "  Especie: " << especie <<endl;
        }
};

#endif
