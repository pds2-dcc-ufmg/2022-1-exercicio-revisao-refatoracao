#include "Ursidae.hpp"

Ursidae::Ursidae(int _idade, std::string _nome, std::string _familia, std::string _especie) : Animal(_idade, _nome, _familia, _especie)
{}

int Ursidae::calculaPeixesConsumidos(int totalPorcoes, int peixesPorPorcao){
    int totalConsumido = peixesPorPorcao * totalPorcoes;
    return totalConsumido;
}