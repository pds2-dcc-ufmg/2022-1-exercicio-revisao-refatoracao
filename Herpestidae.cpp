#include "Herpestidae.hpp"

//Funcao que retorna o peso de racao consumida
double Herpestidae::kgConsumidosDeRacao(int porcoesConsumidas)
    {
        double c = quantidadePorcao * porcoesConsumidas;
        return c;
}

//Funcao que imprime as informações do Animal, especie
void Herpestidae::print()
    {

        Animal::print();

        cout << "  Especie: " << especie << endl;
}
