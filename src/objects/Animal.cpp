#include "Animal.hpp"

Animal::Animal(string nome, string familia, int idade, float quantidadePorcao, float pesoPorcao, string tipoComida){
    this->nome = nome;
    this->familia = familia;
    this->idade = idade;
    this->alimentacao = Alimentacao(quantidadePorcao, pesoPorcao, tipoComida);

} 
        
string Animal::getNome(){
    return this->nome; 
}

string Animal::getFamilia(){
    return this->familia; 
}

int Animal::getIdade(){
    return this->idade; 
}

float Animal::getQuantidadeConsumida(){ 
    return (this->alimentacao.getQuantPorcao() * this->alimentacao.getPesoPorcao()); 
}

void Animal::print(){
    cout << "\n[Animal]\n" << "  Nome: " << this->nome << "  Idade: " << this->idade << "  Familia: " << this->familia << endl;
}
