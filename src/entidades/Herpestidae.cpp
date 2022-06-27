#include "Herpestidae.hpp"

Herpestidae :: Herpestidae(int idade, string nome, string especie) : Animal(idade, nome) {
    this->_especie = especie;
}

void Herpestidae :: print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << this->getNome() << endl
    << "  Idade: " << to_string(this->getIdade()) << endl
    << "  Familia: Herpestidae" << endl
    << "  Especie: " << this->_especie << endl;
}

void Herpestidae :: kgConsumidosDeRacao(int porcoesConsumidas) {
    this->_kgDeRacaoPorDia = QUANT_PORCAO*porcoesConsumidas;
}

int Herpestidae :: getRacaoConsumida() {
    return this->_kgDeRacaoPorDia;
}