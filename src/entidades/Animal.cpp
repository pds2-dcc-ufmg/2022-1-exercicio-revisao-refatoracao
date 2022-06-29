#include "Animal.hpp"
#include "Alimentacao.hpp"

Animal::Animal(std::string nome, std::string especie, unsigned int idade, std::string familia){
    this->nome = nome;
    this->especie = especie;
    this->idade = idade;
    this->familia = familia;
}

Animal::~Animal(){
    for (auto alim : this->historicoAlimentar) delete alim;
}

void Animal::print() {
    std::cout << std::endl 
    << "[Animal]" << std::endl
    << "  Nome: " << this->nome << std::endl
    << "  Idade: " << std::to_string(this->idade) << std::endl
    << "  Familia: " << this->familia << std::endl << std::endl
    << "______________HISTÓRICO DE ALIMENTAÇÃO______________";
    for (auto elem : this->historicoAlimentar){
        std::cout << std:: endl << std::endl;;
        elem->print();
    }
    std::cout << std::endl << "____________________________________________________" << std::endl << std::endl;
}

void Animal::alimentar(std::string nomeComida, double quantidade, std::string descricao, std::string data, Cuidador cuid){
    Alimentacao* alim = new Alimentacao(Alimentacao(nomeComida, quantidade, descricao, data, cuid));
    this->historicoAlimentar.push_back(alim);
}

std::string Animal::getNome(){
    return this->nome;
}