#include "Herpestidae.hpp"

int Herpestidae::quantPorcao = 1;

Herpestidae::Herpestidae(std::string _nome, int _idade, std::string _especie) 
: Animal(_nome, _idade, "Herpestidae") {
    this->especie = _especie;
}


void Herpestidae::print() {
    Animal::print();
    std::cout << "Espécie: " << this->especie << std::endl;
}

std::string Herpestidae::getAtributo(std::string campo) {
    if(campo == "nome") {
        return this->nome;
    } else if(campo == "idade") {
        return std::to_string(this->idade);
    } else if(campo == "familia") {
        return this->familia;
    } else if(campo == "especie") {
        return this->especie;
    } else if(campo == "kgPorcao") {
        return std::to_string(this->kgPorcao);
    } else if(campo == "kgConsumidos") {
        return std::to_string(this->kgConsumidos);
    }

    return "";
}

void Herpestidae::setAtributo(std::string campo, std::string valor) {
    if(campo == "nome") {
        this->nome = valor;
    } else if(campo == "idade") {
        this->idade = std::stoi(valor, nullptr, 10);
    } else if(campo == "familia") {
        this->familia = valor;
    } else if(campo == "especie") {
        this->especie = valor;
    } else if(campo == "quantPorcao") {
        this->quantPorcao = std::stod(valor); 
    }
}

double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas) {
    return this->quantPorcao*porcoesConsumidas;
}