#ifndef ANIMAL_H
#define ANIMAL_H

#include "Alimentacao.hpp"

using namespace std;

class Animal {
    protected:
        int _idade;
        string _familia;
        string _nome;
        Alimentacao* _alimentacao;
        Cuidador* _cuidador;

        double _kgConsumidos = 0;

    public:
        Animal(string familia, string nome, int idade, Alimentacao* alimentacao = nullptr, Cuidador* cuidador = nullptr);
        virtual ~Animal();
        
        string getNome();
        virtual void print_informacoes();
        double getKgConsumidos();
};

#endif