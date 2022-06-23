#include "Animal.hpp"

void Animal::print(){
    cout << "\n[Animal]" << endl
        << "Nome: " << this->nome << endl
        << "Idade: " << this->idade << endl
        << "Familia: " << this->familia<< endl;
}

void Animal::print_oi(){
    cout << "Tchau" << endl;
}
    

    
