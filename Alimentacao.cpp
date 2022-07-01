#include "Alimentacao.hpp"

//Construtor de Classe
Alimentacao::Alimentacao(int _porcao,std::string _comida, std::string _descricao, Cuidador _cuid,Animal* _animal){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->cuid = _cuid;
    this->animal = _animal;
}

//metodo retorna descricao
std::string Alimentacao::Get_descricao(){
    return descricao;
}

//metodo retorna tamanho porcao
int Alimentacao::Get_porcao(){
    return porcao;
}

//metodo modificador de valor da variavel porcao
void Alimentacao::Set_porcao(int _porcao){
    this->porcao = _porcao;
}

//metodo modificador de comida
void Alimentacao::Set_comida(std::string _comida){
    this->comida = _comida;
}

//metodo que informa cuidador e animal pertencente a classe
void Alimentacao::print(){
    std::cout << "Animal: ";
    std::cout << animal->Get_nome() << "\n";
    std::cout << " Cuidador: ";
    std::cout << cuid.Get_nome() << "\n";
}