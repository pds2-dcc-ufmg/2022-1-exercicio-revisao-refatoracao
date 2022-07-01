#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Alimentacao.hpp"

using namespace std;

class Animal {
    protected:
        string nome, familia;
        int idade;
        Alimentacao alimentacao;

    public:
        Animal(string nome, string familia, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida);
        Animal(string nome, string familia, int idade); 
        Animal() = default;

        string getNome();
        string getFamilia();
        int getIdade();
        float getQuantidadeConsumida();

        virtual void print();
};

#endif
