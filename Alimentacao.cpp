#include <iostream>
#include "Alimentacao.hpp"
#include "Animal.hpp"

double Alimentacao::peixes_consumidos = 5;
double Alimentacao::racao_consumida = 1;

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid, std::string _animalNome) : 
porcao(_porcao), comida(_comida),descricao(_descricao),cuid(_cuid),animalNome(_animalNome){};

void Alimentacao::print(){

    std::cout << "Animal: " << animalNome << std::endl;
    std::cout << "Cuidador: " << cuid.getNomeCuidador() << std::endl;
    std::cout << "Descricao: " << descricao << std::endl;
}

double Alimentacao::calcula_peixes_consumidos(int porcao_peixes){
    return (this->peixes_consumidos)*porcao_peixes;
}

double Alimentacao::kg_consumidos_de_racao(int porcoesConsumidas){
    return porcoesConsumidas*racao_consumida;
}
