#include "Cuidador.hpp"

/**
 * @brief Destrói o cuidador e libera a memória 
 * ocupada por todos os seus animais
 */
Cuidador::~Cuidador() {
	for (Animal* &animal : _animais)
		delete animal;
}

/**
 * @brief Constrói um novo cuidador
 * @param nome Nome do cuidador
 */
Cuidador::Cuidador(std::string nome) {
	_nome = nome;
}

/**
 * @brief Adiciona um animal sobre os cuidados do cuidador
 * @param animal Animal a ser adicionado
 */
void Cuidador::adicionar_animal(Animal* &animal) {
	_animais.push_back(animal);
}

/**
 * @brief Imprime as informações de todos os animais do cuidador
 */
void Cuidador::imprimir_info_geral() {
	for (Animal* &animal : _animais)
		animal->imprimir_info();
}

/**
 * @brief Imprime um relatório sobre a alimentação de todos os animais do cuidador
 */
void Cuidador::imprimir_relatorio_alimentacao() {
	for (Animal* &animal : _animais) {
		std::cout << "Animal: " << animal->get_nome() << std::endl;
		std::cout << "  Cuidador: " << _nome << std::endl;
		std::cout << "  Descrição: " << animal->get_descricao() << std::endl << std::endl;
	}
}

/**
 * @brief Acessa os animais do cuidador
 * @return Um vetor com todos os animais do cuidador
 */
std::vector<Animal*> Cuidador::get_todos_animais() {
	return _animais;
}
