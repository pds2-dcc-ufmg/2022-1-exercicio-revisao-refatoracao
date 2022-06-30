#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _nome_animal, Cuidador& _funcionario) :
    porcao(_porcao), comida(_comida), nome_animal(_nome_animal), funcionario(_funcionario) {}

void Alimentacao::printAlimentacao() {

    std::cout << "Animal: " << this->nome_animal << std::endl
    << " Cuidador: " << this->funcionario.getNome() << std::endl
    << " Descricao: " << this->descricao << std::endl <<std::endl;

}

void Alimentacao::setDescricao(std::string _descricao) {

    this->descricao = _descricao;

}

int Alimentacao::getPorcao() {

    return this->porcao;

}

void Alimentacao::setPorcao(int _porcao) {

    this->porcao = _porcao;
    
}