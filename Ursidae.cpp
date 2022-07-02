#include "Ursidae.hpp"

void Ursidae::print()
    {
        cout << "\n[Animal]" << endl
             << "  Nome: " << nome << endl
             << "  Idade: " << idade << endl
             << "  Familia: Ursidae" << endl
             << "  Especie: " << especie << endl;
    }

double Ursidae::calculaPeixesConsumidos(int porcaoPeixes)
    {
        double x;
        return peixesPorPorcao * porcaoPeixes;
    }
