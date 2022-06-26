#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

private:
    int porcao;
    string comida;
    string descricao;
    string nomeAnimal;

public:
    Cuidador cuidador;
    Alimentacao(int porcao, string comida, string descricao, Cuidador cuidador, string nomeAnimal);
    void getDescricao(){
        return descricao;
    };
    string getNomeAnimal(){
        return nomeAnimal;
    };
    void print_alimentacao(){
        cout << "Animal: " << getNomeAnimal << "\n";
        cout << " Cuidador: " << cuidador.getNome << "\n";
    };

};

#endif