#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao,
 std::string _nomeAnimal, Cuidador& _cuidador){
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->nomeAnimal = _nomeAnimal;
    this->cuidador = _cuidador;
};

void Alimentacao::imprimirNomeAnimalCuidador(){
    std::cout << "Animal: " << nomeAnimal << std::endl;
    std::cout << " Cuidador: " << this->cuidador.getNome() << std::endl;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}

void Alimentacao::setPorcao(int _porcao){
    this->porcao = _porcao;
}

std::string Alimentacao::getDescricao(){
    return this->descricao;
}