#include"Herpestidae.hpp"

Herpestidae::Herpestidae(int _idade, string _familia, string _nome, string _especie, double _kgPorPorcao) : Animal(_idade, _familia, _nome, _especie){
    kgPorPorcao = _kgPorPorcao;
}

Herpestidae::Herpestidae() {}

Herpestidae::~Herpestidae() {}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
        return kgPorPorcao * porcoesConsumidas;
}