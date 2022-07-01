#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Alimentacao.hpp"

using namespace std;

class Animal {
    protected:
        string nome, familia;
        int idade;
        float quantidadeConsumida;
        Alimentacao alimentacao;

    public:
        Animal(string nome, string familia, int idade); 
        Animal() = default;

        string getNome();
        string getFamilia();
        int getIdade();
        float getQuantidadeConsumida();
        string getDescricao();

        void setQuantidadeConsumida(float quantidadeConsumida);
        float calcularQuantidadeConsumida();
        virtual void print();
        void setTipoDescricao(string tipoComida, string descricao);
        void setPorcaoQuantidadePorcao(float quantidadePorcao, float pesoPorcao);
};

#endif
