#include "D:\Projetos C\Pds2\Lista 2\Revisao e refatoracao\include\Alimentacao.hpp"

using namespace std;

Alimentacao::Alimentacao(int porcao, string comida, string descricao, string cuidador, string nome){
    _porcao = porcao;
    _comida = comida;
    _descricao = descricao;
    _cuidador = cuidador;
    _nome = nome;
}

void Alimentacao::print(){
    cout << "Animal: ";
    cout << _nome << "\n";

    cout << " Cuidador: ";
    cout << _cuidador << "\n";

    cout << " Descricao: ";
    cout << _descricao << "\n";
}

int Alimentacao::getPorcao(){
    return _porcao;
}