#include "Alimentacao.hpp"

Alimentacao::Alimentacao() {}

Alimentacao::Alimentacao(Animal* _animal, Cuidador& _cuidador, string _comida, int _porcao, string _descricao) {
    animal = _animal;
    cuidador = _cuidador;
    comida = _comida;
    porcao = _porcao;
    descricao = _descricao;
}

void Alimentacao::print() {
    cout << "Animal: " << animal->getNome() << endl;
    cout << " Cuidador: " << cuidador.getNome() << endl;
}

void Alimentacao::alimentar(map<string, double>& tipoAlimento) {
    double kg = calcularKgConsumidos(tipoAlimento);
    animal->comer(kg);
}

double Alimentacao::calcularKgConsumidos(map<string, double>& tipoAlimento) {
    return tipoAlimento[animal->getALIMENTO()] * porcao;
}

string Alimentacao::getDescricao() {return descricao;}
