#include "Herpestidae.hpp"
#include "Animal.hpp"

using namespace std;

// criei um cpp para Herpestidade e construi
// ele e a classe pai
Herpestidae::Herpestidae(string nome, string idade, 
    string familia, string especie) : Animal(nome, idade, familia),
    _especie(especie){
        _quantPorcao = 1;
    }

Herpestidae::Herpestidae(string nome, string idade, string familia) : 
    Animal(nome, idade, familia){
        _quantPorcao = 1;
        _especie = "";
    }

Herpestidae::Herpestidae(){}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas){
    double consumoRacao = _quantPorcao*porcoesConsumidas;
    return consumoRacao;
}

void Herpestidae::print(){
    std::cout << "\n[Animal]" << std::endl;
    std::cout << "  Nome: " << getNome() << std::endl;
    std::cout << "  Idade: " << getIdade() << std::endl;
    std::cout << "  Familia: " << getFamilia() << std::endl;
    std::cout << "  Especie: " << _especie << std::endl;
}
