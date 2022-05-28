#include "Cuidador.hpp"

Cuidador::~Cuidador() {
	for (Animal* &animal : _animais)
		delete animal;
}

Cuidador::Cuidador(std::string nome) {
	_nome = nome;
}

void Cuidador::adicionar_animal(Animal* animal) {
	_animais.push_back(animal);
}

void Cuidador::imprimir_info_geral() {
	for (Animal* &animal : _animais)
		animal->imprimir_info();
}

void Cuidador::imprimir_relatorio_alimentacao() {
	for (Animal* &animal : _animais) {
		std::cout << "Animal: " << animal->get_nome() << std::endl;
		std::cout << "  Cuidador: " << _nome << std::endl;
		std::cout << "  Descrição: " << animal->get_descricao() << std::endl << std::endl;
	}
}

std::vector<Animal*> Cuidador::get_todos_animais() {
	return _animais;
}
