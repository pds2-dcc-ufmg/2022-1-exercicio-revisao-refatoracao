#include "Ursidae.hpp"

int Ursidae::peixesPorPorcao = 5;

Ursidae::Ursidae(int _idade, string _nome, string _especie, double _kgPeixePorDia):Animal(_idade,"",_nome){
    this->especie = _especie;
    this->kgPeixePorDia = _kgPeixePorDia;
}

void Ursidae::print(){
    if(this->especie.empty()){
        cout <<endl << "[Animal]" << endl<< "  Nome: " << getNome() << endl<< "  Idade: " << getIdade() << endl<< "  Familia: Ursidae"<< endl;
    }
    else{
        cout <<endl << "[Animal]" << endl<< "  Nome: " << getNome() << endl<< "  Idade: " << getIdade() << endl<< "  Família: Ursidae" << endl<< "  Especie: " << this->especie << endl;
    }
}

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes){
    return peixesPorPorcao * porcaoPeixes;
}
