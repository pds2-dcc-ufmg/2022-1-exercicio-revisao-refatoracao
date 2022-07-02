#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <iomanip>

using namespace std;

class Animal {
    protected:
        int alimentoPorPORCAO;
    public:
        string idade;
        string familia;
        string nome;
        string especie;
        int porcoesComidas;
        virtual void imprimirDados();
        Animal(string _idade,string _familia,string _nome);
        double calcularConsumo();

};

#endif
