#include"Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, string _comida, string _descr, Cuidador _cuid, string _nome){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descr;
    this->cuid = _cuid;
    this->nomeAnimal = _nome;
}

void Alimentacao::print() {
    std::cout << "Animal: "<< nomeAnimal << "\n"<< " Cuidador: "<< cuid.getNOME() << "\n";
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

string Alimentacao::getdescricao(){
    return this->descricao;
}