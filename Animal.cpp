#include "Animal.hpp"

using std::string;
using std::cout;
using std::endl;

Animal::Animal(string familia, string nome, string idade){
            this->familia = familia;
            this->nome = nome;
            this->idade = idade;
        }

void Animal::print() {

    cout << "\n[Animal]" << endl
         << "  Nome: " << nome << endl
         << "  Idade: " << this->idade << endl
         << "  Familia: " << this->familia << endl;

}

void Animal::print_tchau(){
    cout << "Tchau" << endl;
}
