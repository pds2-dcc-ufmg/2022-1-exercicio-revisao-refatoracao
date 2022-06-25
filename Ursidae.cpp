#include "Ursidae.hpp"

Ursidae::Ursidae(int _idade, std::string _nome, std::string _especie) : Animal(_idade,_nome,_especie)
{}

int Ursidae::calculaPeixesConsumidos(int totalPorcoes, int peixesPorPorcao){
    int totalConsumido = peixesPorPorcao * totalPorcoes;
    return totalConsumido;
}