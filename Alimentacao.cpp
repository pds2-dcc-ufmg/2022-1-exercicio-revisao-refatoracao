#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuidador, std::string _nomeAnimal){ 
        this->porcao = _porcao;
        this->comida = _comida;
        this->descricao = _descricao;
        this->cuidador = _cuidador;
        this->nomeAnimal = _nomeAnimal;
}

void Alimentacao::imprimirDadosAlimentacao() {

        std::cout << "Animal: ";
        std::cout << nomeAnimal << std::endl;

        std::cout << " Cuidador: ";
        std::cout << cuidador.getNome() << std::endl;
}

std::string Alimentacao::getComida(){
        return this->comida;
}

int Alimentacao::getPorcao(){
        return this->porcao;
}

std::string Alimentacao::getDescricao(){
        return this->descricao;
}

std::string Alimentacao::getNomeAnimal(){
        return this->nomeAnimal;
}

void Alimentacao::setDescricao(std::string _descricao){
        this->descricao = _descricao;
}

void Alimentacao::setNomeAnimal(std::string _nomeAnimal){
        this->nomeAnimal = _nomeAnimal;
}

Cuidador Alimentacao::getCuidador(){
        return this->cuidador;
}

void Alimentacao::setCuidador(Cuidador _cuidador){
        this->cuidador = _cuidador;
}