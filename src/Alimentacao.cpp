#include "Alimentacao.hpp"

Alimentacao::Alimentacao(){}

Alimentacao::Alimentacao(int porcao, string comida, string descricao, Cuidador cuidador, string nomeAnimal){
    this->porcao = porcao;
    this->comida = comida;
    this->descricao = descricao;
    this->cuid = cuidador;
    this->nomeAnimal = nomeAnimal;
}

void Alimentacao::setPorcao(int porcao){
    this->porcao = porcao;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

string Alimentacao::getComida(){
    return this->comida;
}

Cuidador Alimentacao::getCuidador(){
    return this->cuid;
}

string Alimentacao::getNome(){
    return this->nomeAnimal;
}

string Alimentacao::getDescricao(){
    return this->descricao;
}

void Alimentacao::print(){
    cout << "Animal: "
    << nomeAnimal << endl
    << " Cuidador: " << cuid.getNome() << endl;
}
