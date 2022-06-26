#ifndef ursidae_HPP
#define ursidae_HPP

#include <iostream>
#include <iomanip>

using namespace std;

int peixesPorPORCAO = 5;

class Ursidae:public Animal{

private:
    double kgPeixePorDia;

public:
    Ursidae(string nome, int idade, string especie, double kgPeixePorDia);

    void print_ursidae(){
        cout << "\n[Animal]" << endl << "  Nome: " << nome << endl << "  Idade: " << idade << endl << "  Família: Ursidae" << endl << "  Especie: " << especie << endl;
    };

    double calcula_PEIXES_CONSUMIDOS(int porcaoPeixes){
        return peixesPorPORCAO*porcaoPeixes;
    };
};

#endif

