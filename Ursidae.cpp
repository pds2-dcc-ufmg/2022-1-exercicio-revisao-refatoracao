#include "Ursidae.hpp"

Ursidae::Ursidae(std::string _nome, int _idade, std::string _especie){

    this->familia = "Ursidae";
    this->nome = _nome;
    this->idade = _idade;
    this->especie = _especie;

}

Ursidae::~Ursidae(){
    
}

void Ursidae::alimentar(std::string _descricao, int _qtd, Cuidador& _cuid){
    
    this->hoje = new Alimentacao(PORCAOPEIXES*_qtd, 0, 0, _cuid, _descricao);

}