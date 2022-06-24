#include "Ursidae.hpp"

void Ursidae::print() {
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << nome << endl;
    cout << "  Idade: " << idade << endl;
    cout << "  Família: Ursidae" << endl;
    cout << "  Especie: " << especie << endl;
}

double Ursidae::calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
    return peixesPorPorcao*porcaoPeixes;
}

int Ursidae::peixesPorPorcao = 5;