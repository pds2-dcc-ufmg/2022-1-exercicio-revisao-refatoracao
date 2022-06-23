#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

using std::string;
class Animal {
    protected:
        string idade;
        string familia;
        string nome;
        const int peixesPorPorcao = 5;
        const double quantidadePorcao = 1.0;
    
    public:
        Animal(string idade, string familia, string nome);
        Animal();
        void printAnimal();
        string getNomeAnimal();
        string getIdadeAnimal();
        string getFamiliaAnimal();
        double porcaoComida(string comida);

};

#endif
