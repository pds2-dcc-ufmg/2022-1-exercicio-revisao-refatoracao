#include "Alimentacao.hpp"

void Alimentacao::print() {
    cout << "Animal: "<< nomeAnimal <<endl;
    cout << " Cuidador: "<< cuid.getNomeCuidador() <<endl;
    cout << " Descricao: " << this->descricao << endl << endl;
}

Alimentacao::Alimentacao(int _porcao,string _comida,string _descricao,string _nomeAnimal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->nomeAnimal = _nomeAnimal;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

void Alimentacao::setPorcao(int _quantidade){
    this->porcao = _quantidade;
}

void Alimentacao::setComida(string _tipo){
    this->comida = _tipo;
}
