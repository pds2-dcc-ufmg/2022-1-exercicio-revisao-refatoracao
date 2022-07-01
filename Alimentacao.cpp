#include "Alimentacao.hpp"

#include "iostream"

#define KGPORRACAO 1
#define PEIXESPORPORCAO 5


Alimentacao::Alimentacao(int _porcao, std::string _comida, Animal *_animal, Cuidador *_cuidador) {
    this->porcao = _porcao;
    this->comida = _comida;
    this->animal = _animal;
    this->cuidador = _cuidador;
    this->descricao = "";

    if(this->animal->getFamilia() == "Herpestidae") {
        this->kgConsumidos = this->porcao*KGPORRACAO;
    }
    else if(this->animal->getFamilia() == "Ursidae") {
        this->kgConsumidos = this->porcao*PEIXESPORPORCAO;
    }
}


void Alimentacao::adicionarDescricao(std::string _descricao) {
    this->descricao = _descricao;
}


double Alimentacao::getKgConsumidos() {
        return this->kgConsumidos;
}


void Alimentacao::print() {
    std::cout << "Animal: "     << this->animal->getNome()   << "\n";
    std::cout << " Cuidador: "  << this->cuidador->getNome() << "\n";
    std::cout << " Descricao: " << this->descricao           << "\n\n";
}
