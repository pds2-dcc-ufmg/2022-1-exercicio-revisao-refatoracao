#include"Animal.hpp"


Animal::Animal(std::string idade, std::string familia, std::string nome){
    this->idade = idade;
    this->familia = familia;
    this->nome = nome;
}

void Animal::print(){

    std::cout<<"\n[Animal]\n";
    std::cout<<"  Nome: "<<nome<<std::endl<<"  Idade: "<<idade<< std::endl<<"  Familia: "<<familia<<std::endl;

}
