
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cuidador.hpp"

using namespace std;

class Alimentacao{

    public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuid;
    string nomeAnimal;


    void print() {

        std::cout << "Animal: ";
        cout << nomeAnimal << "\n";

        std::cout << " Cuidador: ";
        cout << cuid.NOME << "\n";

        
};

#endif
