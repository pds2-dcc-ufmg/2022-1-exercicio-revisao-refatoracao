#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao,
 std::string _nomeAnimal, Cuidador& _cuidador){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->nome_animal = _nomeAnimal;
    this->cuidador = _cuidador;
};

void Alimentacao::imprimir_nome_animal_cuidador(){
    std::cout << "Animal: " << this->nome_animal << std::endl;
    std::cout << " Cuidador: " << this->cuidador.get_nome() << std::endl;
}

int Alimentacao::get_porcao(){
    return this->porcao;
}

void Alimentacao::set_porcao(int _porcao){
    this->porcao = _porcao;
}

std::string Alimentacao::get_descricao(){
    return this->descricao;
}