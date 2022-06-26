#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string _nome, int _idade){
    this->familia = "Herpestidae";
    this->nome = _nome;
    this->idade = _idade;

}

double Herpestidae::quantidadeDeAlimentoConsumida(int porcoesConsumidas){
    double quantPorcao = 1;
    double c = quantPorcao * porcoesConsumidas;
    return c;
}

