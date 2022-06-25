
#ifndef ALIMENTACAO_H
#define ALIMENTACAO_H

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    string nomeAnimal;


    void print() {

        std::cout << "Animal: ";
        cout << nomeAnimal << "\n";

        std::cout << " Cuidador: ";
        cout << cuidador.nome<< "\n";

        //std::cout << " : ";
        //cout << ursidae;
    }

    /*void print() {

        std::cout << "Cuidador: ";
        cout << cuida;

        std::cout << " Animal: ";
        cout << alimentado;
    }*/
};

#endif