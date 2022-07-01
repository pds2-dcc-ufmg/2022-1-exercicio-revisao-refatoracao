#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao,std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuid = _cuid;
    this->nomeAnimal = _nomeAnimal;
}

std::string Alimentacao::Get_descricao(){
    return descricao;
}

int Alimentacao::Get_porcao(){
    return porcao;
}

void Alimentacao::Set_porcao(int _porcao){
    this->porcao = _porcao;
}

void Alimentacao::Set_comida(std::string _comida){
    this->comida = _comida;
}

void Alimentacao::print(){
    std::cout << "Animal: ";
    std::cout << nomeAnimal << "\n";
    std::cout << " Cuidador: ";
    std::cout << cuid.Get_nome() << "\n";
}