#include "Cuidador.hpp"

Cuidador::Cuidador(std::string _nome) : nome(_nome) {}

Cuidador::~Cuidador() {}

std::string Cuidador::getNome() {
	return this->nome;
}
