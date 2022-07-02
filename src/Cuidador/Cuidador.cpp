#include "Cuidador/Cuidador.hpp"

Cuidador::Cuidador (std::string nome, std::string cpf, std::string telefone, std::string nascimento, double salario) {
    this->nome = nome;
    this->cpf = cpf;
    this->telefone = telefone;
    this->nascimento = nascimento;
    this->salario = salario;
}

std::string Cuidador::getNome() {
    return this->nome;
}
