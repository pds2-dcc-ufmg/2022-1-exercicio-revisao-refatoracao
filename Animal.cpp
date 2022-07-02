#include "Animal.hpp"

//Funcao para imprimir as informacoes do animal
void Animal::print()
    {
        cout << "\n[Animal]" << endl
             << "  Nome: " << nome << endl

             << "  Idade: " << idade << endl
             << "  Familia: " << familia << endl;
}

//Funcao que imprimi tchau
void Animal::print_tchau()
    {
        cout << "Tchau" << endl;
}
