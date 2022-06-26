
#include"Alimentacao.hpp"

Alimentacao::Alimentacao(int porcao, std::string comida, std::string descricao, Cuidador cuidador, std::string animal, double quantidadeConsumida){
    this->porcao = porcao;
    this->comida = comida;
    this->descricao = descricao;
    this->cuidador = cuidador;
    this->nomeAnimal = animal;
    this->quantidadeConsumida = quantidadeConsumida;
}

double Alimentacao::getquantidadeConsumida(){
    return quantidadeConsumida;
}

void Alimentacao::print() {

    std::cout <<"Animal: "<<nomeAnimal<<std::endl;
    std::cout <<" Cuidador: "<<cuidador.getNome()<<std::endl;
    std::cout<< " Descricao: "<<descricao<<std::endl;
    std::cout<<std::endl;
}