#include "Animal/Ursidae.hpp"

Ursidae::Ursidae() {
    this->familia = "Ursidae";
    this->quantidadePorcao = 5;
}

Ursidae::Ursidae(std::string nome, int idade) : Ursidae() {
    this->nome = nome;
    this->idade = idade;
    this->especie = "";
}

Ursidae::Ursidae(std::string nome, int idade, std::string especie) : Ursidae (nome, idade) {
    this->especie = especie;
}
