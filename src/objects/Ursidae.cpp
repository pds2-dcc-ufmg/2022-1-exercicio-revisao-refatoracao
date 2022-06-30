#include "Ursidae.hpp"

void Ursidae::print() {
    cout << "\n[Animal]" << endl
    << "  Nome: " << nome << endl
    << "  Idade: " << IDADE << endl
    << "  Família: Ursidae" << endl
    << "  Especie: " << especie << endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    double x;
    return peixesPorPORCAO*porcaoPeixes;
}