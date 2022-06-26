#include "Alimentacao.hpp"

void Alimentacao::print(){
    cout << "Animal: ";
    cout << this->nome_animal << "\n";

    cout << "Cuidador: ";
    cout << this->cuidador.getNome()<< "\n";   
}
void Alimentacao::setPorcao(int _porcao){
    this->porcao = _porcao;
}

void Alimentacao::setComida(string _comida){
    this->comida = _comida;
}

void Alimentacao::setDescricao(string _descricao){
    this->descricao = _descricao;
}

void Alimentacao::setNome_animal(string _nome_animal){
    this->nome_animal = _nome_animal;
}

void Alimentacao::setCuidador(Cuidador _cuidador){
    this->cuidador = _cuidador;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

string Alimentacao::getDescricao(){
    return this->descricao;
}