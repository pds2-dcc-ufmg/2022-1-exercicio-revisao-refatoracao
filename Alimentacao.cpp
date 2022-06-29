#include "Alimentacao.hpp"

Alimentacao::Alimentacao(string _comida, string _descricao, string _nomeAnimal, int _porcao, Cuidador _cuidador){
    comida = _comida;
    descricao = _descricao;
    nomeAnimal = _nomeAnimal;
    porcao = _porcao;
    cuidador = _cuidador;
}

Alimentacao::Alimentacao() {}

Alimentacao::~Alimentacao() {}

string Alimentacao::getDescricao(){
    return this->descricao;
}

void Alimentacao::print(){
    cout << "Animal: " << nomeAnimal << endl;
    cout << "Cuidador: " << cuidador.getNome() << endl;
    cout << "Descrição: " << descricao << endl;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

void Alimentacao::setPorcao(int quantidade){
    this->porcao = quantidade;
}

void Alimentacao::setComida(string tipoDeComida){
    this->comida = tipoDeComida;
}