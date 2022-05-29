#ifndef CUIDADOR_H
#define CUIDADOR_H

#include <vector>

#include "Ursidae.hpp"		//Famílias de animais do zoológico
#include "Herpestidae.hpp"

class Cuidador {
	private:
		std::string _nome;
		std::vector<Animal*> _animais;

	public:
		~Cuidador();
		Cuidador(std::string nome);
		void adicionar_animal(Animal* &animal);
		void imprimir_info_geral();
		void imprimir_relatorio_alimentacao();
		std::vector<Animal*> get_todos_animais();
};

#endif
