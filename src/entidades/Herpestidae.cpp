#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string nome, int idade, string especie, Alimentacao& alimentacao, Cuidador& cuidador) : Animal(nome, idade, "Herpestidae", especie, alimentacao, cuidador){
    this->_consumoDeRacao = this->_RACAOPORPORCAO * alimentacao.getPorcao();
};

Herpestidae::Herpestidae(string nome, int idade) : Animal(nome, idade, "Herpestidae"){};

int Herpestidae::getConsumo(){
    return this->_consumoDeRacao;
}