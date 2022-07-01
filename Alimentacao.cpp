#include "Alimentacao.hpp"

void Alimentacao::print(){

    std::cout << "Animal: "<<std::endl;
    std::cout << nomeAnimal <<std::endl;
    std::cout << " Cuidador: "<<std::endl;
    std::cout << nomeAnimal <<std::endl;
}

int Alimentacao::get_porcao(){
    return porcao;
}

std::string Alimentacao::get_comida(){
    return comida;
}

std::string Alimentacao::get_descricao(){
    return descricao;
}

Cuidador Alimentacao::get_cuid(){
    return cuid;
}

std::string Alimentacao::get_nome_animal(){
    return nomeAnimal;
}