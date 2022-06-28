#include "Herpestidae.hpp"

double Herpestidae::quantPorcao = 1;

Herpestidae::Herpestidae(int _idade, string _familia, string _nome, string _especie):Animal(_idade,_familia,_nome){
    this->especie = _especie;
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    return quantPorcao*porcoesConsumidas;
}

void Herpestidae::print() {
    if(this->especie.empty()){
        cout <<endl << "[Animal]" << endl<< "  Nome: " << getNome() << endl<< "  Idade: " << getIdade() << endl<< "  Familia: "<< getFamilia() << endl;
    }
    else{
        cout <<endl << "[Animal]" << endl<< "  Nome: " << getNome() << endl<< "  Idade: " << getIdade() << endl<< "  Familia: "<< getFamilia() << endl<< "  Especie: " << this->especie << endl;
    }
}
