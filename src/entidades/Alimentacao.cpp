#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, string comida, string descricao){
    this->_porcao = porcao;
    this->_comida = comida;
    this->_descricao = descricao;
}

string Alimentacao::getDescricao(){
    return this->_descricao;
}

int Alimentacao::getPorcao(){
    return this->_porcao;
}