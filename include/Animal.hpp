#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include "Alimentacao.hpp"

using namespace std;

class Animal {
    protected:
        string _nome;
        int _idade;
        string _familia;
        string _especie;
        Alimentacao* _alimentacao;
        Cuidador* _cuidador;
        
    public:
        Animal(string nome, int idade, string familia, string especie, Alimentacao& alimentacao, Cuidador& cuidador);
        Animal(string nome, int idade, string familia);
        Animal(string nome, int idade, string familia, string especie);

        void printInformacoesAnimal();

        void printAlimentacao();
};

#endif
