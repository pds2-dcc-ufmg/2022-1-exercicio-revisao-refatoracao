#ifndef CUIDADOR_H
#define CUIDADOR_H
#include <string>

namespace Cuidador{
	
	class Cuidador{
		private:

			std::string salario;
			std::string nome;
			long int cpf;
			std::string telefone;
			std::string nascimento;

		public:

			//Inicializa um cuidador atribuindo os valores a ele
			Cuidador();
			Cuidador(std::string _nome, long int _cpf, std::string _telefone, std::string _nascimento, std::string _salario);

			//Imprime na tela os dados de um cuidador cadastrado
			void print();

			//Permite o acesso das variaveis fora da classe
			std::string getSalario();
			std::string getNome();
			long int getCpf();
			std::string getTelefone();
			std::string getNascimento();

			//Permite modificar as variaveis fora da classe
			void setSalario(std::string _salario);
			void setNome(std::string _nome);
			void setCpf(long int _cpf);
			void setTelefone(std::string _telefone);
			void setNascimento(std::string _nascimento);

	};
} //Namespace Cuidador
#endif
