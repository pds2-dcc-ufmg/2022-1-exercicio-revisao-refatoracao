#include "Alimentacao.hpp"

Alimentacao::Alimentacao(int _porcao, std::string _comida, std::string _descricao, Cuidador _cuid, std::string _nomeAnimal, double _kgConsumido){
    porcao = _porcao;
    comida = _comida;
    descricao = _descricao;
    cuid = _cuid;
    nomeAnimal = _nomeAnimal;
    kgConsumido =_kgConsumido;
}

void Alimentacao::print(){
    std::cout << "Animal: " << nomeAnimal << std::endl;
    std::cout << "Cuidador: " << cuid.getNome() << std::endl;
    std::cout << "Descrição: " << descricao << std::endl;
}

std::string Alimentacao::getComida(){
    return comida;
}

double Alimentacao::getKg(){
    return kgConsumido;
}

