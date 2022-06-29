#include "Animal.hpp"

Animal::Animal(string nome, int idade, string familia, string especie, Alimentacao& alimentacao, Cuidador& cuidador){
    this->_nome = nome;
    this->_familia = familia;
    this->_especie = especie;
    this->_idade = idade;
    this->_alimentacao = &alimentacao;
    this->_cuidador = &cuidador;
}

Animal::Animal(string nome, int idade, string familia){
    this->_nome = nome;
    this->_idade = idade;
    this->_familia = familia;
    this->_especie = "";
    this->_alimentacao = nullptr;
    this->_cuidador = nullptr;
}

Animal::Animal(string nome, int idade, string familia, string especie){
    this->_nome = nome;
    this->_idade = idade;
    this->_familia = familia;
    this->_especie = especie;
    this->_alimentacao = nullptr;
    this->_cuidador = nullptr;
};

void Animal::printInformacoesAnimal(){
    cout<<"\n[Animal]"<<endl;
    cout<<"  Nome: "<<this->_nome<<endl;
    cout<<"  Idade: "<<this->_idade<<endl;
    cout<<"  Familia: "<<this->_familia<<endl;
    if(this->_especie != ""){
        cout<<"  Especie: "<<this->_especie<<endl;
    }
}

void Animal::printAlimentacao(){
    cout<<"Animal: "<<this->_nome<<"\n Cuidador: "<<this->_cuidador->getNome()<<"\n Descricao: "<<this->_alimentacao->getDescricao()<<endl<<"\n";
}
