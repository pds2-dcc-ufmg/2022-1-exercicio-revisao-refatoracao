#include "Animal.hpp"

Animal::Animal(string nome, string familia, string especie, int idade){
    this->_nome = nome;
    this->_familia = familia;
    this->_especie = especie;
    this->_idade = idade;
}

void Animal::printInformacoesAnimal(){
    cout<<"\n[Animal]"<<endl;
    cout<<"  Nome: "<<this->_nome<<endl;
    cout<<"  Idade: "<<this->_idade<<endl;
    cout<<"  Familia: "<<this->_familia<<endl;
    if(this->_especie != ""){
        cout<<"  Especie: "<<this->_especie<<endl;
    }
}