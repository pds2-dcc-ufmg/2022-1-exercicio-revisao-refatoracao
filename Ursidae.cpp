#include "Ursidae.hpp"

Ursidae::Ursidae(int _idade, std::string _nome, std::string _especie, double _kgPeixePorDia): idade(_idade), nome(_nome), especie(_especie), kgPeixePorDia(_kgPeixePorDia) {

}

void Ursidae::print() {
    std::cout << "\n[Animal]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  Família: Ursidae" << std::endl
    << "  Especie: " << especie << std::endl;
}

double Ursidae::calcula_peixes_consumidos(int porcaoPeixes){
        return URSIDAE_PEIXES_POR_PORCAO*porcaoPeixes;
}