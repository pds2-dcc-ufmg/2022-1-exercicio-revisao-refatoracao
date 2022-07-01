#include "Alimentacao.hpp"

Alimentacao::Alimentacao(){}

Alimentacao::Alimentacao(Animal _animal, Cuidador _cuidador, std::string _descricao, int _porcao, std::string _comida){
    this->animal =Animal (_animal);
    this->cuidador = _cuidador;
    this->descricao = _descricao;
    this->porcao = _porcao;
    this->comida = _comida;
}
        

void Alimentacao::print() {
        std::cout << "Animal: " << this->animal.getNome() << std::endl;
        std::cout << " Cuidador: " << this->cuidador.getNome() << std::endl;
}

std::string Alimentacao::getDescricao(){
    return this->descricao;
}

Animal Alimentacao::getAnimal(){
    return this->animal;
}

int Alimentacao::getPorcao(){
    return this->porcao;
}