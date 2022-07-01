#include "Ursidae.hpp"

Ursidae::Ursidae(string nome, string especie, int idadea){
    this->nome = nome;
    this->familia = "Ursidae";
    this->idade = idade;
    this->especie = especie;
    this->alimentacao = Alimentacao(0, 0, "");
}

Ursidae::Ursidae(string nome, string especie, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida){
    this->nome = nome;
    this->familia = "Ursidae";
    this->idade = idade;
    this->especie = especie;
    this->alimentacao = Alimentacao(quantidadePorcao, pesoPorcao, tipoComida);
}

void Ursidae::print() {
    Animal::print();
    cout << "  Especie: " << this->especie <<endl;
}