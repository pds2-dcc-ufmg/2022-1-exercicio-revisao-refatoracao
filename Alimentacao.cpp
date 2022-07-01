#include "Alimentacao.hpp"

#include "iostream"

Alimentacao::Alimentacao(int _porcao, std::string _comida, Animal *_animal, Cuidador *_cuidador) {
    this->porcao = _porcao;
    this->comida = _comida;
    this->animal = _animal;
    this->cuidador = _cuidador;
    this->descricao = "";
}

void Alimentacao::adicionarDescricao(std::string _descricao) {
    this->descricao = _descricao;
}

void Alimentacao::print() {

    std::cout << "Animal: "     << this->animal->getNome()   << "\n";
    std::cout << " Cuidador: "  << this->cuidador->getNome() << "\n";
    std::cout << " Descricao: " << this->descricao           << "\n\n";
}