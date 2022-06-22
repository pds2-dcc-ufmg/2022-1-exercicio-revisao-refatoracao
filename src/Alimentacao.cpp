#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Animal* _animal, Cuidador &_cuidador) : porcao(_porcao), comida(_comida), 
descricao(_descricao), animal(_animal), cuidador(_cuidador) {}

void Alimentacao::print() const{
    if(animal != nullptr){
        std::cout << "Animal: " << animal->getNome() << std::endl
                << " Cuidador: " << cuidador.getNome() << std::endl
                << " Descricao: " << descricao << std::endl << std::endl;
    } 
    else {
        std::cout << "Não possui animal" << std::endl;
    }
}

int Alimentacao::getPorcao() const{
    return porcao;
}

void Alimentacao::setPorcao(int _porcao){
    porcao = _porcao;
}

void Alimentacao::setComida(std::string _comida){
    comida = _comida;
}

std::string Alimentacao::getDescricao() const{
    return descricao;
}