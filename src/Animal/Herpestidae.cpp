#include "Animal/Herpestidae.hpp"

Herpestidae::Herpestidae() {
    this->familia = "Herpestidae";
    this->quantidadePorcao = 5;
}

Herpestidae::Herpestidae(std::string nome, int idade) : Herpestidae () {
    this->nome = nome;
    this->idade = idade;
    this->especie = "";
}

Herpestidae::Herpestidae(std::string nome, int idade, std::string especie) : Herpestidae (nome, idade) {
    this->especie = especie;
}
