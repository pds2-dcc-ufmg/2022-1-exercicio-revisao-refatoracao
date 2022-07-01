#include "Herpestidae.hpp"

Herpestidae::Herpestidae(string nome, string especie, int idade){
    this->nome = nome;
    this->familia = "Herpestidae";
    this->idade = idade;
    this->especie = especie;
    this->alimentacao = Alimentacao(0, 0, "");
}

Herpestidae::Herpestidae(string nome, string especie, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida){
    this->nome = nome;
    this->familia = "Herpestidae";
    this->idade = idade;
    this->especie = especie;
    this->alimentacao = Alimentacao(quantidadePorcao, pesoPorcao, tipoComida);
}
        
void Herpestidae::print(){
    Animal::print();
    cout << "  Especie: " << this->especie <<endl;
}