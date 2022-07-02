#include "Herpestidae.hpp"


using std::string;
using std::cout;
using std::endl;

Herpestidae::Herpestidae(string _nome, string _idade, string _especie)
    : Animal("Herpestidae", _nome ,_idade ) , especie(_especie){} 


double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    
    double c = pesoPorcao*porcoesConsumidas;
    return c;

}

void Herpestidae::print() {

        Animal::print();
        std::cout << "  Especie: " << especie <<endl;

}

