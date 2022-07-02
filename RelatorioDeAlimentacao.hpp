
#ifndef RelatorioDeAlimentacao_H
#define RelatorioDeAlimentacao_H

#include "Cuidador.hpp"
#include "Animal.hpp"
#include <iostream>
using namespace std;

class RelatorioDeAlimentacao{

    public:
        int porcao;
        string comida;
        string descricao;
        Cuidador* cuidador;
        Animal* animal;
        void imprimirDados();
        RelatorioDeAlimentacao(int _porcao,string _comida,string _descricao,Cuidador &_cuidador, Animal &_animal);
};

#endif