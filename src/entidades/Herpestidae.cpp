#include "Herpestidae.hpp"

Herpestidae::Herpestidae(int _idade, std::string _nome, std::string _familia, std::string _especie) : Animal(_idade,_nome,_familia, _especie)
{}

double Herpestidae::kgConsumidosDeRacao(int totalPorcoes, double kgPorPorcao){
    double totalConsumido = (double) totalPorcoes * kgPorPorcao;
    return totalConsumido;
}