#include"Ursidae.hpp"

Ursidae::Ursidae(int _idade, string _familia, string _nome, string _especie, int _KgPeixesConsumidos) : Animal(_idade, _familia, _nome, _especie){
    KgPeixesConsumidos = _KgPeixesConsumidos;
}

Ursidae::Ursidae() {}

Ursidae::~Ursidae() {}

double Ursidae::peixesConsumidos(int quantPorcao){
    return KgPeixesConsumidos*quantPorcao;
}