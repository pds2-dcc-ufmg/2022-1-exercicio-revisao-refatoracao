#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>

namespace Cuidador{
	
	class Cuidador{
		private:

			std::string nome;

		public:

			//Inicializa um cuidador atribuindo os valores a ele
			Cuidador();
			Cuidador(std::string _nome);

			//Permite o acesso das variaveis fora da classe
			std::string getNome();

	};
} //Namespace Cuidador
#endif
