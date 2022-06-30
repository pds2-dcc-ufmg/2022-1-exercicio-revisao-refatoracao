#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Alimentacao.hpp"

using namespace std;

class Animal {
    private:
        string nome, especie, familia;
        int idade;
        Alimentacao alimentacao;

    public:
        Animal(string nome, string especie, string familia, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida); 
        
        string getNome();
        string getEspecie();
        string getFamilia();
        int getIdade();
        float getQuantidadeConsumida();
};

#endif
