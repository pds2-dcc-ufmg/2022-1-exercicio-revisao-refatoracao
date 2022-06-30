
#ifndef ALIMENTACAO_HPP
#define ALIMENTACAO_HPP

#include "Cuidador.hpp"
#include "Animal.hpp"
using namespace std;

class Alimentacao{

    public:
    int porcao;
    string comida;
    string descricao;
    Cuidador cuidador;
    Animal animal;
    double kgComidaConsumida;

    Alimentacao(int _porcao,string _comida,string _descricao,Cuidador _cuidador,Animal _animal){
        porcao = _porcao;
        comida = _comida;
        descricao = _descricao;
        cuidador = _cuidador;
        animal = _animal;
    }
    void print() {

        cout << "Animal: " << animal.nome << endl
        << " Cuidador: " << cuidador.nome << endl
        << " Descricao: " << descricao << endl << endl;

    }

};

#endif