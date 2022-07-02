#include "Animal.hpp"

Animal::Animal(string _idade,string _familia,string _nome){
    this->idade = _idade;
    this->familia = _familia;
    this->nome = _nome;
    this->especie = "";
    this->porcoesComidas =0;
}
 void Animal::imprimirDados() {
            cout <<endl<< "[Animal]" << endl<< "  Nome: " << this->nome << endl<< "  Idade: " << this->idade << endl<< "  Familia: " << this->familia << endl;
            if(this->especie!=""){
                std::cout << "  Especie: " << especie <<endl;
            }
}
double Animal::calcularConsumo(){
        return this->alimentoPorPORCAO*this->porcoesComidas;
}