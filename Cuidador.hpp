#ifndef Cuidador_H
#define Cuidador_H


class Cuidador{

	private:

    		std::string nome,cpf,telefone,birth,salario;

	public:
	
		Cuidador(std::string nome, std::string cpf,std::string telefone,std::string birth, std::string salario);
		Cuidador();
		void print(); 
		std::string getNomeCuidador();

};

#endif
