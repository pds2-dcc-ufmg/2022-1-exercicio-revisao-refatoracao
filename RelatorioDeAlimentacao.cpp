#include "RelatorioDeAlimentacao.hpp"

RelatorioDeAlimentacao::RelatorioDeAlimentacao(int _porcao,string _comida,string _descricao,Cuidador &_cuidador, Animal &_animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuidador = &_cuidador;
    this->animal = &_animal;
    this->animal->porcoesComidas = porcao;

}

void RelatorioDeAlimentacao::imprimirDados() {
        cout << "Animal: "<< this->animal->nome << endl<< " Cuidador: "<< this->cuidador->nome << endl;
        cout << " Descricao: " << this->descricao << endl << endl;
    }