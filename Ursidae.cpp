#include "Ursidae.hpp"

void Ursidae::print() {
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << nome << endl;
    cout << "  Idade: " << IDADE << endl;
    cout << "  Família: Ursidae" << endl;
    cout << "  Especie: " << especie << endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    double x;
    return peixesPorPORCAO*porcaoPeixes;
}

int Ursidae::peixesPorPORCAO = 5;