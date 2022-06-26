#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(string _nome, int _idade, string _familia) : nome(_nome), idade(_idade), familia(_familia) {
    if(familia == "Ursidae"){
        ALIMENTO = "Peixe";
    }
    else {
        ALIMENTO = "Ração";
    }
}

void Animal::print() {
    cout << "\n[Animal]" << endl;
    cout << "  Nome: " << nome << endl;
    cout << "  Idade: " << idade << endl;
    cout << "  Familia: " << familia << endl;
}

void Animal::setKgAlimentoConsumido(double kg) {
    kgAlimentoConsumido = kg;
}

double Animal::getKgAlimentoConsumido() {return kgAlimentoConsumido;}

string Animal::getNome() {return nome;}

string Animal::getALIMENTO() {return ALIMENTO;}