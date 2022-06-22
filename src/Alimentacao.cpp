#include "Alimentacao.hpp"

Alimentacao::Alimentacao() {}

void Alimentacao::cadastrar(int _porcao, Cuidador& _cuidador, std::string _tipoComida, std::string _descricao, std::string _nomeAnimal) {
    this->porcao = _porcao;
    this->cuidador = _cuidador;
    this->tipoComida = _tipoComida;
    this->descricao = _descricao;
    this->nomeAnimal = _nomeAnimal;
    this->kgPeixeConsumidos = 0;
    this->kgRacaoConsumidos = 0;
}

int Alimentacao::getPorcao() {
    return this->porcao;
}

void Alimentacao::setKgPeixeConsumidos(double _kgPeixeConsumidos) {
    this->kgPeixeConsumidos = _kgPeixeConsumidos;
}

void Alimentacao::setKgRacaoConsumidos(double _kgRacaoConsumidos) {
    this->kgRacaoConsumidos = _kgRacaoConsumidos;
}

double Alimentacao::getKgPeixeConsumidos() {
    return this->kgPeixeConsumidos;
}

double Alimentacao::getKgRacaoConsumidos() {
    return this->kgRacaoConsumidos;
}

std::string Alimentacao::getDescricao() {
    return this->descricao;
}

void Alimentacao::print() {
    std::cout << "Animal: " << nomeAnimal << std::endl;

    std::cout << " Cuidador: " << cuidador.getNome() << std::endl;
}