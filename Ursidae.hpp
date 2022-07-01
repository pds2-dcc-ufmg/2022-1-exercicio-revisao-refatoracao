#ifndef URSIDAE_H
#define URSIDAE_H

// padronizei o #define
// fiz herança na classe
// agora ela é filha de Animal
#include "Animal.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

class Ursidae : public Animal{
    private:
        double _kgPeixePorDia;
        // mudei operador de acesso
        // e retirei algumas variaveis pois
        // agr será responsabilidade de Animal 
        string _especie;
        // double _kgPeixePorDia; ERA UMA VARIAVEL INUTILIZADA NO CODIGOU
    public:
        // adicionei dois construtores, um apenas com animal
        // e outro completo, para o caso de inicializar Animal
        // da familia Ursidae para o print mas tb precisa para alimentacao
        Ursidae(string, string, string, double, string);
        Ursidae(string, string, string);
        Ursidae();

        // padronizei camelCase e mudei pra static int
        int getPPP(void);
        // imlementar no cpp
        void print(void) override;/*{
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  Família: Ursidae" << endl
              << "  Especie: " << especie << endl;
        }*/

        double calculaPeixesConsumidos(int); /*{
            double x;
            return peixesPorPORCAO*porcaoPeixes;
        }*/

};

#endif

