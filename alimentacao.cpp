 #include "Alimentacao.hpp"

#include "Alimentacao.hpp"

Alimentacao :: Alimentacao(int _porcao, string _comida, string _descricao, string _nomeAnimal) {
    this->porcao = _porcao;
    this->comida = _comida;
    this->descricao = _descricao;
    this->nomeAnimal = _nomeAnimal;
}

void Alimentacao ::Cuidador(Cuidador _cuidador){
    this->cuidador = _cuidador;
}



int Alimentacao :: getPorcao() {
    return this->porcao;
} 

void Alimentacao :: print() {

        std::cout << "Animal: "<< std::cout << nomeAnimal << std::endl;

        std::cout << " Cuidador: "<<std::cout << this-> cuidador.getNome << std::endl;

        
};
