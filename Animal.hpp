#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
    private:
        string _nome;
        string _idade;
    protected:
        string _familia;
    public:
        // criei um construtor
        Animal(string, string, string);
        Animal();

        string getNome(void);
        string getIdade(void);
        string getFamilia(void);

        // mover a implementacao para um arquivo cpp
        // e transformei em um metodo virtual que será
        // modificado na sua chamada 
        // mas nao mudará o comportamento de print do animal
        // como pedido na orientacao do VPL para a saída ser a mesma
        virtual void print(void);/*{
            cout << "\n[Animal]" << endl
            << "  Nome: " << nome << endl

              << "  Idade: " << IDADE << endl
            << "  Familia: " << family << endl;
        }*/
        // retirei funcao printOi que nao era usada
        void printOi(void);/*{
            cout << "Tchau" << endl;
        }*/
};

#endif
