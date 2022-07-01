#include "Herpestidae.hpp"

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie, std::string _comida){

    this->nome = _nome;
    this->idade = _idade;
    this->especie = _especie;
    this->comida = _comida;
    this->familia = "Herpestidae";
}

Herpestidae::~Herpestidae(){

}

void Herpestidae::alimentar(std::string _descricao, int _qtd, Cuidador& _cuid){

    int _unRacao = 0;
    int _unRacaoEspecial = 0;                   

    if(this->comida=="Ração especial"){
        _unRacaoEspecial = _qtd*RACAO;

    }else if(this->comida=="Ração"){
        _unRacao = _qtd*RACAO;

    }

    this->hoje = new Alimentacao(0, _unRacao, _unRacaoEspecial, _cuid, _descricao);

}

 