#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao,std::string _comida, std::string _descricao, Cuidador _cuid,Animal* _animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuid = _cuid;
    this->animal = _animal;
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
    std::cout << animal->Get_nome() << "\n";
    std::cout << " Cuidador: ";
    std::cout << cuid.Get_nome() << "\n";
}